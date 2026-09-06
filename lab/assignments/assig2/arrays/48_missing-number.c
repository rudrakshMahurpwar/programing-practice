#include <stdio.h>

int missing(int arr[], int n, int index, int expected)
{
    if (index == n)
        return expected;

    if (arr[index] == expected)
        return missing(arr, n, index + 1, expected + 1);

    return expected;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Missing number is: %d\n", missing(arr, n, 0, 1));

    return 0;
}

