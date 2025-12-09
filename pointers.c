#include <stdio.h>

// Function pointers
int add(int a, int b)
{
    return a+b;
}

int (*fp)(int,int) = add;

int main()
{
    int x = 20;
    int *p = &x;
    int **pp = &p;

    printf("Value of x is: %d\n", x);
    printf("Value of *p is: %d\n", *p);
    printf("Value of **pp is: %d\n", **pp);

    int result = fp(2,3);
    printf("Result of function pointer: %d\n", result);


}