#include <stdlib.h>
#include <stdio.h>
#include <string.h>

    char strcat_my (char arr_1[], char arr_2[]);

  //  char arr[];                            // Глобальный массив. После исп. функции - скопировать в локальный массив.

int main ()
{
    char s[100] = "Margarita", *y;

    strcat_my(s, " very");
    strcat_my(s, " clever");
    puts(s);

 //   printf("%s", strcat_my("This moment is awesome", "- the best!"));

    return 0;
}

char strcat_my (char arr_1[], char arr_2[])
{
 //   strcpy(arr, arr_1);                       // Копируем строку в глобальный массив для последующего изменения.

    int end_of_arr_1 = strlen(arr_1);

    int j = 0;

    for (j = 0; arr_2[j] != 0; j++) {
        arr_1[end_of_arr_1] = arr_2[j];
        end_of_arr_1++;
    }

    return arr_1;
}
