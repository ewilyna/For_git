#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

<<<<<<< HEAD
    printf("length = %d\n", strlen(name));
=======
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0';
>>>>>>> ab152e7d1268a1b9b19461b6937ee04674c50683

    printf("Now enter your last name: ");
    gets(last);

    printf("Hello, %s %s!\n", first, last);
}

