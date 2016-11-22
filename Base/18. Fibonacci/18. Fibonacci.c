#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Fibonacci:");

    int i = 0, summand_1 = 0, summand_2 = 1, sum = 0, limit = 2147483647;

    for (i = 0; summand_2 <= limit; i++) {
        sum = summand_1 + summand_2;
        if (summand_2 + sum < 0) {
            printf("\n\nThe last number in the int type is: %d.\n", sum);
            break;
        }
        summand_1 = summand_2;
        summand_2 = sum;
        printf("\n%d", sum);
    }

    return 0;
}
