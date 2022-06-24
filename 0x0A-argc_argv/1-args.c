#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[i]");

    for (i = 1; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return (0);
}
