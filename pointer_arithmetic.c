#include <stdio.h>

// Size of struct == 64 + sizeof(int)
struct Person
{
    char name[64];
    int age;
};

// Pointer is just an INT value that has the address in it :)
int main(int argc, char *argv[])
{
    struct Person people[100];

    struct Person *p_Person = people; // p_Person points to people[0]

    int i = 0;
    for (i = 0; i < 100; i++)
    {
        p_Person->age = 0;
        p_Person->name[0] = 0;
        p_Person += 1;
    }

    return 0;
}