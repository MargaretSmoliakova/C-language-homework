#include <stdio.h>
#include <stdlib.h>

int strlen_my (char a[]);

int main()
{
    printf("%d", strlen_my("hello, I'm 22 years old"));
    return 0;
}

int strlen_my (char a[])
{
    int i = 0, j = 0;
    char z = '0'
    int arr_int[20];

    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= '0' && a[i] <= '9') {
                arr_int[j] = a[i] - z;
                j++;
        }

    for (i = 0; i < 20; i++)
       return printf("%d, ", arr_int[i]);
}
