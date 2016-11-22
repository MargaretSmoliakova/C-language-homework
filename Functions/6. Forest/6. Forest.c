#include <stdio.h>
#include <stdlib.h>

int Forest(int p, int k, int t);

int main()
{
    int p, k, t;

    printf("Forest.\n\n");
    printf("Please input initial volume of the forest: ");
    scanf("%d", &p);

    printf("Please input forest growth in percentage: ");
    scanf("%d", &k);

    printf("Please input plan for year: ");
    scanf("%d", &t);

    printf("Attention! Forest will be destroyed in %d year(-s).", Forest(p, k, t));

    return 0;
}

int Forest (int p, int k, int t) {
    int i = 0;

    while (p > 0) {
        p += (p * (k/100));
        p -= t;
        i++;
    }

    return i;
}
