#include <stdio.h>
#include <string.h>

void askname(char *first, char *last)
{
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0';

    printf("Now enter your last name: ");
    gets(last);
}
