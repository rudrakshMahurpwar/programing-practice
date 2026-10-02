#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;

struct Node {
        node *left;
        int data;
        node *right;
};

node* insert(node *root, int num);
node* delete(node *root, int num);
int min(node *root);
void inorderTraversal(node *root);
void postorderTraversal(node *root);
void preorderTraversal(node *root);
node* mirror(node *root);
int height(node *root);
int countNodes(node *root);
void levelOrder(node *root);

int main(){
        node *root = NULL;
        int choice, num;

        do {
                printf("\n--- Binary Search Tree Operations ---\n");
                printf("1. Insert Element\n");
                printf("2. Delete Element\n");
                printf("3. Inorder Traversal\n");
                printf("4. Preorder Traversal\n");
                printf("5. Postorder Traversal\n");
                printf("6. Level-wise Ordering\n");
                printf("7. Mirror BST\n");
                printf("8. Height of BST\n");
                printf("9. Total Nodes Count\n");
                printf("10. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch(choice) {
                        case 1:
                                printf("Enter value to insert: ");
                                scanf("%d", &num);
                                root = insert(root, num);
                                printf("%d inserted successfully.\n", num);
                                break;

                        case 2:
                                printf("Enter value to delete: ");
                                scanf("%d", &num);
                                root = delete(root, num);
                                printf("Deletion process completed for %d.\n", num);
                                break;

                        case 3:
                                printf("Inorder Traversal: ");
                                inorderTraversal(root);
                                printf("\n");
                                break;

                        case 4:
                                printf("Preorder Traversal: ");
                                preorderTraversal(root);
                                printf("\n");
                                break;

                        case 5:
                                printf("Postorder Traversal: ");
                                postorderTraversal(root);
                                printf("\n");
                                break;

                        case 6:
                                printf("Level-wise Ordering: ");
                                levelOrder(root);
                                printf("\n");
                                break;

                        case 7:
                                root = mirror(root);
                                printf("BST mirrored successfully!\n");
                                break;

                        case 8:
                                printf("Height of BST: %d\n", height(root));
                                break;

                        case 9:
                                printf("Total Nodes: %d\n", countNodes(root));
                                break;

                        case 10:
                                printf("Exiting program...\n");
                                exit(0);

                        default:
                                printf("Invalid choice! Please try again.\n");
                }
        } while (choice != 10);

        return 0;
}

node* insert(node *root, int num){
        if (root == NULL){
                node *temp = (node*) malloc(sizeof(node));
                temp -> data = num;
                temp -> left = NULL;
                temp -> right = NULL;
                return temp;
        }
        else{
                if (root -> data < num)
                        root -> right = insert(root -> right, num);
                else if (root -> data > num)
                        root -> left = insert(root -> left, num);
        }
        return root;
}

int min(node *root){
        if (root != NULL){
                while (root -> left != NULL)
                        root = root -> left;
        }
        return root -> data;
}

node* delete(node *root, int num){
        if (root != NULL){
                if (num > root -> data)
                        root -> right = delete(root -> right, num);
                else if (num < root -> data)
                        root -> left = delete(root -> left, num);
                else{
                        if (root -> left != NULL && root -> right != NULL){
                                
                                root -> data = min(root -> right);
                                root -> right = delete(root -> right, root -> data);
                        }
                        else{
                                node *temp = root;
                                if (root -> left == NULL)
                                        root = root -> right;
                                else
                                        root = root -> left;
                                free(temp);
                        }
                }
        } 
        return root;
}

void inorderTraversal(node *root){
        if (root == NULL)
                return;
        inorderTraversal(root -> left);
        printf(" %d ", root -> data);
        inorderTraversal(root -> right);
}

void postorderTraversal(node *root){
        if (root == NULL)
                return;
        postorderTraversal(root -> left);
        postorderTraversal(root -> right);
        printf(" %d ", root -> data);
}

void preorderTraversal(node *root){
        if (root == NULL)
                return;
        printf(" %d ", root -> data);
        preorderTraversal(root -> left);
        preorderTraversal(root -> right);
}

node* mirror(node *root){
        if (root == NULL)
                return NULL;
        
        node *temp = root -> left;
        root -> left = mirror(root -> right);
        root -> right = mirror(temp);
        
        return root;
}

int height(node *root){
        if (root == NULL)
                return 0;
        
        int leftHeight = height(root -> left);
        int rightHeight = height(root -> right);
        
        if (leftHeight > rightHeight)
                return leftHeight + 1;
        else
                return rightHeight + 1;
}

int countNodes(node *root){
        if (root == NULL)
                return 0;
        return 1 + countNodes(root -> left) + countNodes(root -> right);
}

void levelOrder(node *root){
        if (root == NULL)
                return;
        
        node *queue[100];
        int front = 0, rear = 0;
        
        queue[rear++] = root;
        
        while (front < rear){
                node *current = queue[front++];
                printf(" %d ", current -> data);
                
                if (current -> left != NULL)
                        queue[rear++] = current -> left;
                if (current -> right != NULL)
                        queue[rear++] = current -> right;
        }
}
