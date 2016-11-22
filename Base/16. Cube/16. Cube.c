#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k, i = 1;
    double number;

    printf("Please enter your k value:\n");
    scanf("%d", &k);

    for (i = 1; i <= k; i++) {
        number = pow(i, 3);
    }

    printf("Your number is: %lf.\n", number);

    return 0;
}
