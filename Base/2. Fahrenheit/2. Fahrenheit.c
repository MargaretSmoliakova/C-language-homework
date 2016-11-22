#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fdegrees, cdegrees;

    printf("Celsius to Fahrenheit conversion\n\n");
    printf("Please enter degrees Celsius: ");
    scanf("%lf", &cdegrees);

    fdegrees = (cdegrees * 1.8) + 32.0;

    printf("Degrees Fahrenheit: %lf fagrenheits", fdegrees);

    return 0;
}
