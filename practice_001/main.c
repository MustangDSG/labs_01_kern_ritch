#include <stdio.h>

int main(int argc, char *argv[])
{
    //printf("Test1\n");
    printf("Hello, World!\n");
    //printf(*argv[argc]);
    printf("Hello, ");
    printf("World!");
    printf("\n");

    for (volatile int i=0; i<10; i++)
    {
        printf("\a");
        //printf("%d", i);
    }
    return 0;
}
