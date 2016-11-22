#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Distance(double x1, double y1, double x2, double y2);

int main()
{
    double x1, x2, y1, y2;

    printf("Please input your coordinates: \nVertical value: ");
    scanf("%lf", &x1);
    printf("Horizontal value: ");
    scanf("%lf", &y1);
    printf("\nPlease input your expected coordinates: \nVertical value: ");
    scanf("%lf", &x2);
    printf("Horizontal value: ");
    scanf("%lf", &y2);

    Distance(x1, y1, x2, y2);

    return 0;
}

double Distance(double x1, double y1, double x2, double y2)
{
    double xDistance, yDistance, distance;

    if (x1 == x2) {
        distance = fabs(y2 - y1);
        printf("\nThe distance between your and expected coordinates is the following: %lf.\n", distance);
        return 0;
    } else if (y1 == y2) {
        distance = fabs(x2 - x1);
        printf("\nThe distance between your and expected coordinates is the following: %lf.\n", distance);
        return 0;
    } else {
        yDistance = fabs(y2 - y1);
        xDistance = fabs(x2 - x1);
        distance = sqrt(pow(xDistance, 2) + pow(yDistance, 2));
        printf("\nThe distance between your and expected coordinates is the following: %lf.\n", distance);
        return 0;
    }
}
