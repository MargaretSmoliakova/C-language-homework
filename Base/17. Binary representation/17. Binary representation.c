#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, predetermined_number, excess[20] = {}, i = 0, j = 1;

    printf("Please enter your number: ");
    scanf("%d", &predetermined_number);
    printf("\n");
                                                  // Перебор каждого числа до заданного.
    for (j = 1; j <= predetermined_number ; j++) {
        number = j;
                                                  // Перевод в бинарный код.
        for (i = 0; number >= 1; i++) {
            excess[i] = number%2;
            number /= 2;
        }
                                                  // Определение конца массива.
        excess[i + 1] = 9;
                                                  // Поиск числа с определенным бинарным кодом и его вывод.
        for (i = 0; excess[i] < 9; i++) {
            if (excess[i] != 1) break;
            else if (excess[i + 1] == 9) {
                printf("The number is: %d.\nBinary result is: ", j);
                for (i = 0; excess[i] != 9; i++) printf("%d", excess[i]);
                printf(".\n\n");
            }
        }
    }
    return 0;
}
