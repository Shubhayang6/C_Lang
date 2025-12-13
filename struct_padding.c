#include <stdio.h>

struct A
{
    char c;
    int i;
};

struct B
{
    int i;
    char c;
};

int main()
{

    printf("%zu\n", sizeof(struct A)); // size = 8 due to padding

    printf("%zu\n", sizeof(struct B)); // size = 8 due to padding but preferred for large structures
}