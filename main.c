#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name));
    name[strlen(name)-1] = '\0';

    return 0;
}
