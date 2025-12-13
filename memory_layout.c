#include <stdio.h>
#include <stdlib.h>

void stack_alloc(){
    int x = 42; // stored in stack
    printf("%p\n", (void*)&x);
}

void heap_alloc(){
    int* p = malloc(sizeof(int));
    *p = 42;

    free(p);
}

int main(){
    stack_alloc();
    heap_alloc();
}