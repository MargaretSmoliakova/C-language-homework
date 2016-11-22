#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;

    printf("Please enter any character you want: \n");
    character = getchar();

    printf("Your character is: %c.\n", character);
    printf("Your character in decimal format is: %d.\n", character);
    printf("Your character in octal notation is: %o.\n", character);
    printf("Your character in hexadecimal format is: %x.\n", character);

    return 0;
}
