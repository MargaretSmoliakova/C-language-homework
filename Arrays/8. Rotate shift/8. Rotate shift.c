#include <stdio.h>
#include <stdlib.h>

void PrintOutArray (char array[], int size);
void PrintOutRotateArray (char array[], int size, int n);

int main()
{
    char array [] = "My name is Margo!";
    int n = 0;

    printf("Please input the number of rotate shift: ");
    scanf("%d", &n);
    printf("\n\n");

    printf("Initial array is: ");
    PrintOutArray (array, sizeof(array)/sizeof(char) - 2);

    printf("Array with rotate shift: ");
    PrintOutRotateArray(array, sizeof(array)/sizeof(char) - 2, n);

    return 0;
}

void PrintOutArray (char array[], int size) {
    int i = 0;

    for (i = 0; i <= size; i++) printf("%c", array[i]);

    printf("\n\n");
}

void PrintOutRotateArray (char array[], int size, int n) {
    int i = 0;

    if (n >= size) {
        n %= size;
    }

    if (n < 0) n = abs(n);

    for (i = n; i <= size ; i++) printf("%c", array[i]);
    for (i = 0; i < n; i++) printf("%c", array[i]);

    printf("\n\n");
}

