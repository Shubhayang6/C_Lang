#include <stdio.h>

// Array Traversal

int arr[4] = {10, 20, 30, 40};
int *p = arr;

void safe_iter()
{

    for (int *p = arr; p < arr + 4; p++)
    {
        printf("%d\n", *p);
    }
}

int main()
{

    printf("%d\n", *(p));     // returns the first element of the array
    printf("%d\n", *(p + 1)); // prints 20
    printf("%d\n", *(p + 2)); // prints 30
    printf("%d\n", *(p + 3)); // prints 40
    printf("%d\n", *(p + 4)); // prints garbage - UB

    // calling safe_iter:
    printf("Safe Iter function call...\n");
    safe_iter();
}
