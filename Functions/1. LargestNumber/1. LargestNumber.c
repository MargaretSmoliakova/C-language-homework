#include <stdio.h>
#include <stdlib.h>

int LargestNumber(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Please input your numbers to know which of them is the largest?\nYour first number: ");
    scanf("%d", &a);
    printf("\nYour second number: ");
    scanf("%d", &b);
    printf("\nYour third number: ");
    scanf("%d", &c);

    LargestNumber(a, b, c);

    return 0;
}

int LargestNumber(int a, int b, int c)
{
    int largest;

    if (a != b && b != c && a != c) {
        largest = (a > b) ? a : b;
        largest = (largest > c) ? largest : c;

        printf("\nThe largest number from your list is: %d", largest);
        printf("\n\n");
        return 0;

    } else if (a == b && b == c) {
        printf("\nAll of your numbers are equal...\n\n");
        return 1;

    } else if (a == b || b == c || c == a) {
        largest = (a == b) ? 0 : ((a > b) ? a : b);
        if (largest == 0) largest = (b == c) ? 0 : ((b > c) ? b : c);
        if (largest == 0) largest = (c == a) ? 0 : ((c > a) ? c : a);

        printf("\nThe largest number from your list is: %d", largest);
        printf("\n\n");
        return 0;
    }
}
