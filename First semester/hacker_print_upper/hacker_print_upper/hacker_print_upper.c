#include <stdio.h>
#include <stdlib.h>

void FileHacker(FILE *fp);
void FilePrint(FILE *fp);
void FileUpper(FILE *fp);


int main()
{
    FILE *fp;

    fp = fopen("H:\\C programming\\AlexHacker.txt", "r+");
           if (fp == NULL) {
                printf("Problems!");
                return 1;
           }


    FileHacker(fp);
    FilePrint(fp);
    FileUpper(fp);
    FilePrint(fp);



    fclose(fp);

    return 0;
}

void FileHacker(FILE *fp)
{
    char c = 0;
    int r = 0;

    rewind(fp);
    while ((c = getc(fp)) != EOF) {
        if (c >= '0' && c <= '9') {
                r = rand()%9;
                printf("%d", r);
        } else printf("%c", c);
    }

    puts(" ");
}

void FilePrint(FILE *fp)
{
    char c = 0;

    rewind(fp);
    while ((c = getc(fp)) != EOF) printf("%c", c);

    puts(" ");
}

void FileUpper(FILE *fp)
{
    char c = 0, arr[50] = { NULL };
    int i = 0;

    rewind(fp);
    while ((c = getc(fp)) != EOF) {
        arr[i] = c;
        if (arr[i] >= 'a' && arr[i] <= 'z') arr[i] -= ' ';
        i++;
    }

    rewind(fp);
    fputs(arr, fp);
}

