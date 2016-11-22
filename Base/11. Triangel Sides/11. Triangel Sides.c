#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    double angle, cos_angle;

    printf("Please enter size of the triangle's sides: \nSide a:\n");
    scanf("%d", &a);
    printf("Side b:\n");
    scanf("%d", &b);
    printf("Side c:\n");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0) {
        angle = sqrt(((pow(b, 2) + pow(c, 2) - pow(a, 2))/(2*b*c)));

    } else {
        printf("Error");
        return 1;
    }

    printf("Side a: %d.\nSide b: %d.\nSide c: %d.\n\n", a, b, c);
    if (angle > -1 && angle < 1) printf("The triangle is possible.\n\n");
    else printf("The triangle is impossible.\n\n");
    return 0;
}
