#include <stdio.h>
#include <stdlib.h>

long IntEquivalent (char array[], int itsSize);

int main()
{
    char array[20] = {NULL};

    printf("Program: equivalent.\n\n");
    printf("Please input you string: ");
    scanf("%s", array);
    printf("\n%s\n\n", array);
    printf("\nYour integer is: %ld.\n\n", IntEquivalent(array, 20));

    return 0;
}

long IntEquivalent (char array[], int itsSize) {
    int i = 0, ten = 1;
    long number = 0;

    for (i = itsSize - 2; i >= 0; i--) {

        number += (array[i] - '0') * ten;
        ten *= 10;

    }
    return number;
}
