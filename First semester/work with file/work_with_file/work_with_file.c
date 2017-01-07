#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    char backslash[100];                    // Запрашиваем информацию у пользователя.
    int begin = 0, end = 0;
    char fileName[100] = { NULL };
    int j = 0, n = 0;
    FILE *fp;
    int i = 0;
    char c = 0;

    printf("Please enter the path to your file and its name .... \n");
    gets(backslash);
    printf("Please enter the firs number....\n");
    scanf(" %d", &begin);
    printf("Please enter the second one.....\n");
    scanf(" %d", &end);

    for (j = 0; backslash[j] != 0; j++, n++) {     // Проверяем backslash и изменяем его, если необходимо.
         fileName[n] = backslash[j];
         if ((backslash[j] == 92) && (backslash[j + 1] != 92) && (backslash[j - 1] != 92)) {
            n++;
            fileName[n] = 92;
         }
         if ((backslash[j] == 92) && (backslash[j + 1] == 92) && (backslash[j - 1] == 92)) {
               puts("\nSorry, problems with the path!");
               return 1;
         }
    }


    printf("You've entered the following information:\nYour file is located in %s.", fileName);
    printf("\nYour begin number is %d, and your end number is %d.", begin, end);

    printf("\n---------------------------------\n---------------------------------\n");

                               // Выводим запрошенные данные из файла.

    fp = fopen(fileName, "r");
         if ((fp = fopen(fileName, "r")) == NULL) {
            printf("Problems!");
            return 1;
    }



    while ((c = getc(fp)) != EOF) {
        i++;
        if (i >= begin && i <= end)
            printf("%c", c);
    }

    fclose (fp);

    puts("\n\nThe end of operation.");

    return 0;
}
