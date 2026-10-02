/**
 * ============================================================================
 * Project Name : Text-Based Student Marks Statement Generator
 * Description  : A robust C program that dynamically collects student details, 
 *                subject marks, and grades, then formats and renders an 
 *                aesthetic, boxed report card using custom string-formatting 
 *                and padding functions.
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COL 70 // Defines the fixed width of the report card border

// Structure representing an individual academic subject's details
struct Subject {
	float mark;
	char grade;
	char subject[COL - 5];
};

// Global variables for layout dimensions, visual dividers, and aggregates
int len = COL - 5;
char dash[(COL - 5) + 1];
float totalMarks, averageMarks;

// Renders a horizontal border line made of asterisks
void printLine() {
	for (int i = 0; i < COL; i++)
		printf("*");
	printf("\n");
}

// Renders a dashed horizontal divider line
void printDashLine(char dashLine[]){
	for (int i = 0; i < COL - 5; i++)
		printf("-");
}

// Renders an empty padded row with borders on both edges
void printEmptyLine(){
	printf("* ");
	for (int i = 4; i < COL; i++)
		printf(" ");
	printf(" *\n");
}

// Centers a given string horizontally within the report card boundaries
void printMid(char *string) {
	int len = strlen(string);
	int spaces = COL - len - 4;

	printf("* ");

	for (int k = spaces / 2; k > 0; k--)
		printf(" ");

	printf("%s", string);

	for (int k = (spaces + 1) / 2; k > 0; k--)
		printf(" ");

	printf(" *\n");
}

// Prints key-value pairs aligned to the left margin inside the card
void printLeft(char *key, char *value){
	printf("* ");
	printf("%s %s", key, value);
	int len = strlen(key) + strlen(value);
	for (int i = 1; i < COL - 4 - len; i++)
		printf(" ");
	printf(" *\n");
}

// Safely reads a string from standard input with overflow protection and buffer flushing
void getString(char name[], int size, char var[]) {
	while (1) {
		printf("Enter your %s (max %d characters): ", var, size - 2);

		fgets(name, size, stdin);

		// Check if newline was successfully read (input fit within buffer)
		if (strchr(name, '\n') != NULL) {
			name[strcspn(name, "\n")] = '\0';
			break;
		}

		// Flush remaining input buffer if overflow occurred
		int ch;
		while ((ch = getchar()) != '\n' && ch != EOF);

		printf("Too long! Please try again.\n");
	}
}

// Robustly reads and validates float marks input (range: 0 to 100)
float getMarks(char *var){
	float mark;
	while (1){
		printf("Enter marks of %s Subject: ", var);

		if (scanf("%f", &mark) == 1) {
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF);

			if (mark >= 0 && mark <= 100)
				return mark;
			printf("Range of marks is 0 - 100.\n");
		} else {
			printf("Invalid input. Please enter a number.\n");
			int ch;
			while ((ch = getchar()) != '\n' && ch != EOF);
		}
	}
}

// Maps numerical scores to standard academic letter grades
char calculateGrade(int score) {
	if (score >= 85) {
		return 'A';
	} else if (score >= 70) {
		return 'B';
	} else if (score >= 60) {
		return 'C';
	} else if (score >= 50) {
		return 'D';
	} else if (score >= 40) {
		return 'E';
	} else {
		return 'F';
	}
}

// Convenience wrapper to fetch subject name, validate marks, and assign a grade
void getSubjectData(struct Subject *sub){
	getString (sub->subject, 20 * sizeof(char), "Subject");
	sub->mark = getMarks (sub->subject);
	sub->grade = calculateGrade(sub->mark);
}

// Iterates through the subject array to calculate the cumulative sum of marks
float calculateTotalMarks(struct Subject subjects[], int subjectsNo){
	float total = 0;
	for (int i = 0; i < subjectsNo; i++){
		total += subjects[i].mark;
	}
	return total;
}

// Formats and displays the tabular list of subjects, marks, totals, and final outcomes
void displayTable(struct Subject subjects[], int subjectsNo, int len) {
	char header[len + 1];
	char totalStr[len + 1];
	char avgStr[len + 1];
	char finalGradeStr[len + 1];
	char finalGrade;

	sprintf(header, "%-6s %-25s %-10s %-6s", "SRNO", "SUBJECT", "MARKS", "GRADE");

	printMid(header);
	printMid("");

	// Render each subject row dynamically
	for (int i = 0; i < subjectsNo; i++) {
		char row[len + 1];
		sprintf(row, "%-6d %-25s %-10.2f %-6c", i + 1, subjects[i].subject, subjects[i].mark, subjects[i].grade);
		printMid(row);
	}

	printMid("");
	printMid(dash);
	printEmptyLine();

	sprintf(totalStr, "Total Marks = %.2f", totalMarks);
	sprintf(avgStr, "Average Marks = %.2f", averageMarks);
	printMid(totalStr);
	printMid(avgStr);

	// Validate if the student passed all individual subjects (threshold > 40)
	int allPassed = 1;
	for (int i = 0; i < subjectsNo; i++) {
		if (subjects[i].grade == 'F') {
			allPassed = 0;
			break;
		}
	}

	// Determine final overall grade based on pass status and average performance
	if (allPassed) {
		finalGrade = calculateGrade(averageMarks);
	} else {
		finalGrade = 'F';
	}

	sprintf(finalGradeStr, "Grade = %c", finalGrade);
	printMid(finalGradeStr);
}

int main() {
	// Local buffers for student and institutional credentials
	char title[len + 1];
	char board[len + 1];
	char examYear[6];
	char examNameYear[len + 1];
	char rollNo[12];
	char studentName[32];
	char motherName[32];
	char fatherName[32];
	char dob[12];
	char schoolName[len + 1];

	// Initialize the divider dash pattern string
	for (int i = 0; i < len; i++)
		dash[i] = '-';
	dash[len] = '\0';

	// Collect student and exam metadata interactively
	getString(board, sizeof(board), "Board ");
	getString(examYear, sizeof(examYear), "Exam Year ");
	getString(studentName, sizeof(studentName), "Student's Name ");
	getString(rollNo, sizeof(rollNo), "Roll Number ");
	getString(motherName, sizeof(motherName), "Mother's Name ");
	getString(fatherName, sizeof(fatherName), "Father's Name ");
	getString(dob, sizeof(dob), "Date of Birth (dd/mm/yyyy) ");
	getString(schoolName, sizeof(schoolName), "School Name ");

	int subjectsNo;
	printf("Enter the number of subjects: ");
	scanf("%d", &subjectsNo);

	// Clear the input stream buffer after reading integer count
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	// Dynamically allocate memory for the array of subjects based on user input
	struct Subject *subjects = malloc(subjectsNo * sizeof(struct Subject));
	if (subjects == NULL) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	// Populate data for each individual subject
	for (int i = 0; i < subjectsNo; i++) {
		printf("\n--- Enter details for Subject %d ---\n", i + 1);
		getSubjectData(&subjects[i]);
	}

	// Compute academic aggregate totals and averages
	totalMarks = calculateTotalMarks(subjects, subjectsNo);
	averageMarks = totalMarks / subjectsNo;

	// Build compound strings for report card headings
	strcpy(title, "Marks Statement");
	strcpy(examNameYear, "SECONDARY SCHOOL EXAMINATION, ");
	strcat(examNameYear, examYear);

	// Render the final formatted certificate layout block by block
	printLine();
	printMid(title);
	printMid(board);
	printMid(examNameYear);
	printEmptyLine();
	printLeft("This is to certify that: ", studentName);
	printLeft("Roll Number: ", rollNo);
	printLeft("Mother's Name: ", motherName);
	printLeft("Father's Name: ", fatherName);
	printLeft("Date of Birth: ", dob);
	printLeft("School Name: ", schoolName);
	printMid("Has Achieved Scholastic Achievements as under");
	printEmptyLine();
	printMid(dash);

	// Render dynamic academic records table
	displayTable(subjects, subjectsNo, len);

	printEmptyLine();
	printLine();

	// Clean up dynamically allocated heap memory to prevent memory leaks
	free(subjects);

	return 0;
}

