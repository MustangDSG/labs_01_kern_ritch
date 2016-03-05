#include <stdio.h>

int main(int argc, char *argv[])
{
    //ex. 1.1

//    //printf("Test1\n");
//    printf("Hello, World!\n");
//    //printf(*argv[argc]);
//    printf("Hello, ");
//    printf("World!");
//    printf("\n");

    //ex. 1.2

//    for (volatile int i=0; i<10; i++)
//    {
//        printf("\a");
//        //printf("%d", i);
//    }

    //ex. 1.3

    printf("Fahrenheit to Celsius converter\n\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = -100;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
