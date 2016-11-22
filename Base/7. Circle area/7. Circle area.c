#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double size, circle_area;

    printf("Please enter the size of the side of the square: \n");
    scanf("%lf", &size);

    circle_area = sqrt(2 * size * size);

    printf("Size of the scanf is: %lf\n", size);
    printf("Size of the circle area is: %lf\n", circle_area);
    return 0;
}
