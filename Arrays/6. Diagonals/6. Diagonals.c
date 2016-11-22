#include <stdio.h>
#include <stdlib.h>

#define MAX 6

void FillingArray(int array[][MAX], int size);
void ChangeArray(int array[][MAX], int size);
void PrintOutArray(int array[][MAX], int size);

int main()
{
    int array[MAX][MAX] = {NULL};

    printf("Program: diagonals.\n");
    printf("\nYour initial array: \n");
    FillingArray(array, MAX);
    PrintOutArray (array, MAX);

    printf("\n\nYour changed array: \n\n");
    ChangeArray(array, MAX);
    PrintOutArray (array, MAX);

    return 0;
}

void FillingArray (int array[][MAX], int size)
{
    int i = 0, j = 0;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            array[i][j] = rand()%10;
        }
    }
}

void ChangeArray (int array[][MAX], int size)
{
    int i = 0, j = 0, number = 0;

    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++) {
            if (j == 0) {                               // Меняем цифры местами лишь один раз
                number = array[i][i];
                array[i][i] = array[i][size - 1 - i];
                array[i][size - 1 - i] = number;
            }
        }
    }
}

void PrintOutArray (int array[][MAX], int size)
{
    int i = 0, j = 0;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) printf ("%d", array[i][j]);
        printf("\n");
    }
}
