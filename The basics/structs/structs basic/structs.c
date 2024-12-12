#include <stdio.h>
#include <string.h>

struct Person
{
    char name[36];
    int age;
};

int main()
{

    struct Person person1;
    struct Person person2;

    strcopy(person1.name, "Goob");
    person1.age = 22;

    strcopy(person2.name, "Pedro");
    person2.age = 32;

    printf("\nHello %s, you are %d years old!", person1.name, person1.age);
    printf("\nHello %s, you are %d years old!", person2.name, person2.age);

    return 0;
}