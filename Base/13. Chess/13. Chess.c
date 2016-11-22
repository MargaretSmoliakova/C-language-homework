#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, l, m, n;

    printf("Please enter k:\n");
    scanf("%d", &k);
    printf("Please enter l:\n");
    scanf("%d", &l);
    printf("Please enter m:\n");
    scanf("%d", &m);
    printf("Please enter n:\n");
    scanf("%d", &n);

    if (k >= 0 && l >= 0 && m >= 0 && n >= 0) {

        if (k + 1 == m || k - 1 == m) {
            if (l + 2 == n || l - 2 == n) printf("Chess knight is a threat.");
            else printf("Chess knight is NOT a threat.");
        }
        else if ((k + 2) == m || (k - 2) == m) {
            if (l + 1 == n || l - 1 == n) printf("Chess knight is a threat.");
            else printf("Chess knight is NOT a threat.");
        }
        else printf("false");
    } else {
        printf("Chess knight is NOT a threat.");
    }
    return 0;
}
