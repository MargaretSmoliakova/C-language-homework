#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, first_int, last_int, i = 0, check = 10, summary = 0, multiplication = 1;

    printf("Please enter your number: \n");
    scanf("%d", &number);

    if (number >= 10) {

        for (i = 0; i < number; i++) {
            if (check < number) check *= 10;
            else {
                check /= 10;
                break;
            }
        }

        i = 0;

        while (i <= number) {
            summary += i;
            i++;
            if (i <= number) multiplication *= i;
        }

        last_int = number % 10;
        first_int = (number - (number % check)) / check;

    } else printf("Error");

    printf("first integer is: %d.\n", first_int);
    printf("last integer is: %d.\n", last_int);
    printf("summary is: %d.\n", summary);
    printf("multiplication is: %d.\n", multiplication);

    return 0;
}
