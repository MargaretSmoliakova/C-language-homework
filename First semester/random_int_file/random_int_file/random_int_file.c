#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp;

    fp = fopen("F:\\C programming\\AlexHacker.txt", "r");
            if (fp == NULL)
            {
            puts("Problems!");
            return 1;
            }

    int i = 0;
    char c = 0;

    for (i = 0; (c = getc(fp)) != EOF; i++) {
        if (c >= '0' && c <= '9') {
                printf("%d", rand()%10);
        }
         printf("%c", c);
    }

    fclose(fp);

    printf("\nok");

    return 0;

}
