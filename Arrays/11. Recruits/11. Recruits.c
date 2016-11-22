#include <stdio.h>
#include <stdlib.h>

#define MAX 8

void CreateArray (int array[], int size);
int FaceAbout (int array[], int size);
void PrintOutArray (int array[], int size);

int main()
{
    int array[MAX] = {NULL};

    CreateArray(array, MAX);

    printf("\nYour array: ");
    PrintOutArray(array, MAX);

    getchar();

    while (FaceAbout(array, MAX) != 0) {
        printf("\n\nChanged array: ");
        PrintOutArray(array, MAX);
        getchar();
    }

    printf("\n\nChanged array: ");
    PrintOutArray(array, MAX);
    printf("\n\n");

    return 0;
}

void CreateArray (int array[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) {
        array[i] = rand()%2;
    }
}

int FaceAbout (int array[], int size)
{
    int i = 0, count = 0;

    for (i = 0; i < size; i++) {
        if (array[i] == 1 && array[i + 1] == 0) {
            array[i] = 0;
            array[i + 1] = 1;
            i++;
            count++;
        } else continue;
    }

    if (count != 0) return 1;
    else return 0;
}

void PrintOutArray(int array[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) printf("%d, ", array[i]);
}
