#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    double angle_value_degrees, angle_value_radians, result;

    printf("Please enter the angle value: ");
    scanf("%lf", &angle_value_degrees);

    angle_value_radians = angle_value_degrees * M_PI / 180;
    result = (3 * sin(angle_value_radians) - sin(3 * angle_value_radians)) / 4;

    printf("%lf", angle_value_radians);
    printf("\nRESULT: %lf", result);

    return 0;
}
