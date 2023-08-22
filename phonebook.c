#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int n = 2;

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "David";
    people[0].number = "+254-54745475";

    people[1].name = "Carter";
    people[1].number="+435-567578689";

    string name = get_string("Name:");

    for (int i = 0; i < n; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
        else
        {
            printf("Not found\n");
            return 1;
        }
    }
}