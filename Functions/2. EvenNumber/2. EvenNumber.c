#include <stdio.h>
#include <stdlib.h>

int Even(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Please input your numbers:\n\nYour first number: ");
    scanf("%d", &a);
    printf("Your second number: ");
    scanf("%d", &b);
    printf("Your third number: ");
    scanf("%d", &c);

    Even(a, b, c);

    return 0;
}

int Even (int a, int b, int c)
{
    if (a%2 == 0 && b%2 == 0 && c%2 == 0) {
        printf("\nAll of the numbers are even.\n");
        return 1;
    } else if (a%2 != 0 && b%2 != 0 && c&2 != 0){
        printf("\nAll of the numbers are odd.\n");
        return 0;
    }
    else {
        printf("\nYour numbers are both even and odd.\n");
        return 2;
    }
}
