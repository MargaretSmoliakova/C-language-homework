#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, hours, minutes, break_period, classes, time_in_min_b, time_in_min_e;

    printf("Schedule:\n\n");
    printf("Begin time (hours):\n");
    scanf("%d", &hours);
    printf("Begin time (minutes):\n");
    scanf("%d", &minutes);
    printf("Break (minutes):\n");
    scanf("%d", &break_period);
    printf("Number of classes:\n");
    scanf("%d", &classes);

    if (hours < 0 || hours > 24 || minutes < 0 || minutes > 60) {
        printf("Error");
        return 0;
    }
    minutes += (hours*60);
    time_in_min_b = minutes;

    for (i = 1; i <= classes; i++) {
        if (i == 1) {
            time_in_min_b = minutes;
            minutes = (time_in_min_b % 60);
            hours = (time_in_min_b - minutes)/60;
        }

        printf("\n%d class begin at %d hours and %d minutes.\n", i, hours, minutes);

        time_in_min_e = time_in_min_b + 120;
        minutes = (time_in_min_e % 60);
        hours = (time_in_min_e - minutes)/60;
        printf("%d class end at %d hours and %d minutes.\n", i, hours, minutes);
        printf("Break after %d class begins at %d hours and %d minutes ", i, hours, minutes);

        time_in_min_b = time_in_min_e + break_period;
        minutes = (time_in_min_b % 60);
        hours = (time_in_min_b - minutes)/60;
        printf("and ends at %d hours and %d minutes.\n\n", hours, minutes);
    }
    return 0;
}
