#include <stdio.h>
#include <stdlib.h>

int BinaryRepresentation (int number);

int main()
{
    int i = 0, number;

    printf("Please input your number: ");
    scanf("%d", &number);

    BinaryRepresentation (number);

    printf("\n\n");

    return 0;
}

int BinaryRepresentation (int number)
{
    int i = 0, array[20] = {};

    for (i = 0; number >= 1; i++) {
        array[i] = number%2;
        number /= 2;
    }

    printf("\nBinary representation: ");

    for (i--; i >= 0; i--) printf("%d", array[i]);

    return 0;
}
