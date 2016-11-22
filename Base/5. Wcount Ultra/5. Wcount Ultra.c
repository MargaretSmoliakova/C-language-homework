#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binteger, linteger, summary = 0, multiplication = 1, i;

    printf("Please enter the first integer: \n");
    scanf("%d", &binteger);
    printf("Please enter the last integer of your numerical interval: \n");
    scanf("%d", &linteger);

    for (i = binteger; i <= linteger; i++) {
        summary += i;
        multiplication *= i;
    }

    printf("The summary is equal to %d.\n", summary);
    printf("The multiplication is equal to %d.\n", multiplication);

    return 0;
}
