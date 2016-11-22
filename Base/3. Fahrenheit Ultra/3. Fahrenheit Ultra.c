#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    double fdegrees, cdegrees;
    char choice;

    printf("Celsius to Fahrenheit conversion\n\n");

    do {
        printf("Please enter degrees Celsius: ");
        scanf("%lf", &cdegrees);

        fdegrees = (cdegrees * 1.8) + 32.0;

        printf("Degrees Fahrenheit: %lf fagrenheits\n\n", fdegrees);

        printf("Do you want to repeat the process (y/n)?\n");
        choice = toupper(getch());
    } while (choice == 'Y');

    return 0;
}
