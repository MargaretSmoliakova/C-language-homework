#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, minutes, hours;

    printf("Please enter the angle 'y': ");
    scanf("%d", &y);

    if (y >= 0 && y <= 360) {
        hours = y/30;
        minutes = ((y*360/30)%360)*60/360;
    } else printf("Error");

    printf("The result is %d hours and %d minutes.\n\n", hours, minutes);

    return 0;
}
