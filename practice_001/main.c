#include <stdio.h>

int main()
{
    //ex. 1.1

    printf("Hello, World!\n");
    printf("Hello, ");
    printf("World!");
    printf("\n");

    //ex. 1.2

    printf("\nTesting all escape sequencies.\n");
    printf("New line '\\n'.\n");
    printf("Horizontal \t tab '\\t'.\n");
    printf("Vertical \v tab '\\v'.\n");
    printf("Back space, '\\b' \b.\n");
    printf("Carriage return '\\r' \r.\n");
    printf("Fill page, '\\f' \f.\n");
    printf("System bell '\\a'\a.\n");
    printf("Some special chars '\"' \? \\. Oct code \057, hex code \x2A.\n");

    //ex. 1.3

    printf("\nFahrenheit to Celsius converter.\n");
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

    //ex. 1.4

    printf("\nCelsius to Fahrenheit converter.\n");
    lower = -100;
    upper = 100;
    step = 20;
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%4.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}
