#include <stdio.h>
#include <stdlib.h>

#define MAX 8

void CreateArray (int array[], int size);
void SortArray (int array[], int size);
void PrintOutArray (int array[], int size);

int main()
{
    int array[MAX] = {NULL};

    CreateArray(array, MAX);

    printf("\nYour array: ");
    PrintOutArray(array, MAX);

    SortArray(array, MAX);

    printf("\nYour changed array: ");
    PrintOutArray(array, MAX);
    printf("\n\n");

    return 0;
}

void CreateArray (int array[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) {
        array[i] = rand()%10;
    }
}

void SortArray (int array[], int size)
{
    int i = 0, j = 0, count = 1, temporaryNumber = 0;

    for (i = 0; i < size - 1; i++){                         // Сортирвка от меньшего к большему;
        for (j = 0 ; j < size - i - 1 ; j++) {
            if (array[j] > array[j + 1]) {
                temporaryNumber = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporaryNumber;
            } else continue;
        }
    }

    for (i = 0; i < size - 1; i++) {                            // Разделение на две половины по группам нужных цифр (от меньшего к большему)
        for (j = count; j <= size - i - 2; j += 2) {
            temporaryNumber = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temporaryNumber;
        }
        count++;
    }

    for (i = (size/2); i < size - 1; i++){                         // Сортирвка второй половины от большего к меньшему;
        for (j = (size/2); j < size - 1 ; j++) {
            if (array[j] < array[j + 1]) {
                temporaryNumber = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporaryNumber;
            } else continue;
        }
    }
}

void PrintOutArray(int array[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) printf("%d, ", array[i]);
}
