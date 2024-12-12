#include <stdio.h>

typedef char user[25];

typedef struct
{
    char name[25];
    int age;
} Person;

int main()
{
    // instead of char name[25] = "goob";
    user user1 = "goob";

    // instead of struct Person person1 = {"goob", 22};
    Person person1 = {"goob", 22};

    return 0;
}