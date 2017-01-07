#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int atoi_my (char str[]);

void main(void)
{
    int atoi_my_func = atoi_my("hhh786bdsh");
    printf("%d", atoi_my_func);
    return 0;
}

int atoi_my (char str[])
{
    int len = strlen(str);                                         // Вычисляем длину строки для for цикла.

    int i = 0, ten = 10, start_chartoint = 10, chartoint = 0;

    for (i = len - 1; str[i] != 0; i--)
        if ((str[0] < '0') || (str[0] > '9')) {                    // Если 1-ый char не число, возвращаем 0.
                chartoint = 0;
                return chartoint;
        }

        else if ((start_chartoint == 10) && (str[i] >= '0') && (str[i] <= '9')) {
                start_chartoint = str[i] - '0';
        }

        else if ((start_chartoint < 10) && (str[i] >= '0') && (str[i] <= '9')) {
                chartoint += (str[i] - '0') * ten;
                ten *= 10;
        }
    ;

    if (start_chartoint != 0) chartoint += start_chartoint;

 return chartoint;
}
