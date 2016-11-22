#include <stdio.h>
#include <stdlib.h>

int Recursion (int number, int i, int start);

int main()
{
    int number, i = 1, start = 1;

    printf("Program: Recursion(sum of the numbers in the row).\n\n");
    printf("Please input your number: ");
    scanf("%d", &number);

    printf("\nThe sum of the numbers in the row is: %d.\n\n", Recursion (number, i, start));

    return 0;
}

int Recursion (int number, int i, int start)
{
    if (i == number) return start;

    return  start + Recursion(number, i + 1, start + i);
}
