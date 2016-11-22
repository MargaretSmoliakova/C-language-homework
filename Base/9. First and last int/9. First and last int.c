#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, first_int, last_int, i = 0, check = 10;

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

        last_int = number % 10;
        first_int = (number - (number % check)) / check;

    } else printf("Error");

    printf("first integer is: %d.\n", first_int);
    printf("last integer is: %d.\n", last_int);

    return 0;
}
