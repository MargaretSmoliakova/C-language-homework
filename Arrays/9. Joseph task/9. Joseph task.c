#include <stdio.h>
#include <stdlib.h>

void JosephNumber (int array[], int size, int m, int* j);
int CheckArray (int array[], int size);
int ShowLuckyGuy (int array[], int size);

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, *j = 1;

    printf("Program: Joseph's task!\n\n");

    JosephNumber(array, sizeof(array)/sizeof(int), 3, &j);
    printf("\n\n");

    return 0;
}

void JosephNumber(int array[], int size, int m, int* j)
{
    int i = 0, print = 0;

    while (i < size) {
        if (CheckArray(array, size) == 1) {
            printf("The lucky guy was under the following number: %d\n\n", ShowLuckyGuy(array, size));
            break;
        }


        if (*j == m) {
            if (array[i] == 0 && i != size - 1) {
                i++;
                continue;
            } else if (array[i] == 0 && i == size - 1) {
                i = 0;
                continue;
            } else if (array[i] != 0 && i == size - 1) {
                array[i] = 0;
                *j = 1;
                i = 0;
                continue;
            } else if (array[i] != 0 && i != size - 1) {
                array[i] = 0;
                *j = 1;
                i++;
                continue;
            }
        } else {
            if (array[i] == 0 && i != size - 1) {
                i++;
                continue;
            } else if (array[i] == 0 && i == size - 1) {
                i = 0;
                continue;
            } else if (array[i] != 0 && i == size - 1) {
                (*j)++;
                i = 0;
                continue;
            } else if (array[i] != 0 && i != size - 1) {
                (*j)++;
                i++;
                continue;
            }
        }
    }
    /*for (i = 0; i < size; i++) {
        if (CheckArray(array, size) == 1) {
            printf("The lucky guy was under the following number: %d\n\n", ShowLuckyGuy(array, size));
            break;
        }
        printf("\Start...\n");
        for (print = 0; print < size; print++) printf("%d, ", array[print]);
                printf("\n");
        printf("J: %d.\n\n", *j);
        printf("I: %d.\n\n", i);
        if (*j == m) {
            if (array[i] == 0 && i != size - 1) continue;
            else if (array[i] == 0 && i == size - 1) {
                i = 0;
                continue;
            } else if (array[i] != 0 && i == size - 1) {
                array[i] = 0;
                *j = 1;
                i = 0;
                continue;
            } else if (array[i] != 0 && i != size - 1) {
                array[i] = 0;
                *j = 1;
                continue;
            }
        } else {
            if (array[i] == 0 && i != size - 1) continue;
            else if (array[i] == 0 && i == size - 1) {
                i = 0;
                continue;
            } else if (array[i] != 0 && i == size - 1) {
                (*j)++;
                i = 0;
                continue;
            } else if (array[i] != 0 && i != size - 1) {
                (*j)++;
                continue;
            }
        }
    }*/
}

int CheckArray (int array[], int size)
{
    int i = 0, check = 0;

    for (i = 0; i < size; i++) {
        if (array[i] != 0) check++;
    }

    return check;
}

int ShowLuckyGuy (int array[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++) {
        if (array[i] != 0) return array[i];
    }
}
