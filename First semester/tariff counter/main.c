#include <stdio.h>
#include <stdlib.h>
#define LOWESTTARIFF 1009.8
#define MIDDLETARIFF 1312.7
#define HIGHESTARIFF 1900
#define T1 250.0
#define T2 400.0



/* Считаем тариф, по которому клиент должен платить, затем - сумму в белках */

int main(void)
{
    char yes;
    double forTariff;
    double lastMonth, thisMonth;
    double price;

// Что введет клиент?

    printf("Do you know the exact amount of electric energy in kWh for the last month (please enter y/n): \n");
    scanf("%c", &yes);

    while (yes != 'y' && yes != 'n') {
        scanf("%c", &yes);
        printf("Can you follow the instructions, dude?\nAgain...Do you know the exact amount of electric energy in kWh for the last month (please enter y/n): \n");
        scanf("%c", &yes);
    }

    if (yes == 'y'){
        printf("uhuuuuuu, you're cool, dude :)\nPlease enter this amount of electric energy in kWh (as close as one decimal place; ex.: 775.9): \n");
        scanf("%lf", &forTariff);
    }
    else if (yes == 'n'){
        printf("Please enter the amount of electric energy in kWh in last month (as close as one decimal place; ex.: 438596.7): \n");
        scanf("%lf", &lastMonth);
        printf("Please also enter the amount of electric energy in kWh in this month (as close as one decimal place; ex.: 438886.2): \n");
        scanf("%lf", &thisMonth);
        forTariff = thisMonth - lastMonth;
        printf("You've used %.1lf kWh.\n", forTariff);
    }
    else {
        return 1;
    }

// Выводим тариф и вычисляем сумму в белках

    if (forTariff < T1){
            printf("Our congratulations, the tariff is BYR %.1lf for 1 kWh.\n", LOWESTTARIFF);
            price = forTariff * LOWESTTARIFF;
            printf("wow! You have to pay for your electricity BYR %.0lf.\n", round(price));
    }
    else if (forTariff > T1 && forTariff < T2){
            printf ("Do not worry, the tariff is not so high, in the amount of BYR %.1lf for 1 kWh.\n", MIDDLETARIFF);
            price = (T1 * LOWESTTARIFF) + ((forTariff-T1) * MIDDLETARIFF);
            printf("You have to pay for your electricity only BYR %.0lf.\n", round(price));
    }
    else {
            printf("oh... Your tariff is BYR %d for 1 kWh.\n", HIGHESTARIFF);
            price = (T1 * LOWESTTARIFF) + ((T2-T1) * MIDDLETARIFF) + ((forTariff - T2) * HIGHESTARIFF);
            printf("oh... You have to pay for your electricity BYR %.0lf.\nSo sorry :(\n", round(price));
    }

}
