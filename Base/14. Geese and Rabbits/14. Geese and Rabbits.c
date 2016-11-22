#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, number, geese, rabbits;

    printf("Please enter your number: \n");
    scanf("%d", &number);

    number *= 2;
    geese = 0;
    rabbits = number/4;


    for (i = 1; i < number/4; i++) {

        geese += 2;
        rabbits--;

        printf("Rabbits: %d and geese: %d.\n", rabbits, geese);
    }

    if (number%4 != 0) printf("Rabbits: %d and geese: %d.\n", rabbits, geese + 1);

    if (number%4 == 0) printf("Rabbits: %d.\n", number/4);
    printf("Geese: %d.\n", number/2);

    return 0;
}
