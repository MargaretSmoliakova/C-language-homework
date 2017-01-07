#include <stdio.h>
#include <stdlib.h>

void PrintMenu(void);
char AddBook (void);
void ShowList(void);
char DeleteBook(void);

int main()
{
    char c = 0;

    while (1)
    {
        PrintMenu();
        c = getch();
        if (c == '1') AddBook ();
        else if (c == '2') ShowList();
        else if (c == '3') DeleteBook();
        else if (c == '0') break;
        else ;
    }

    return 0;
}

void PrintMenu(void)
{
    puts("--------------");
    puts("1. Add book");
    puts("2. Show list");
    puts("3. Delet book");
    puts("0. Exit");
    puts("--------------");
}
char AddBook (void)
{
    FILE *fp;
    char booksName[50];

    puts("Please enter the book's name, you want to add:\n");
    gets(booksName);

    fp = fopen("H:\\C programming\\menu.txt", "a");
         if (fp == NULL) printf("problems in adding a book!");

    fputs(booksName, fp);

    fclose(fp);

    puts("Your book is added.");
}
void ShowList(void)
{
    char c = 0;
    FILE *fp;

    fp = fopen("H:\\C programming\\menu.txt", "r");
         if (fp == NULL) printf("problems in showing the list!");

    while ((c = getc(fp)) != EOF) printf("%c", c);

    puts("");

    fclose(fp);
}
char DeleteBook(void)
{
    char c = 0;
    int i = 0;
    FILE *fpR;
    FILE *fpA;
    char booksName[50];

    puts("Please enter the book's name, you want to delete:\n");
    gets(booksName);

    fpR = fopen("H:\\C programming\\menu.txt", "r");
    fpA = fopen("H:\\C programming\\menuForA.txt", "a");
        if (fpR == NULL) printf("Problems with deleting the book in fpR!");
        if (fpA == NULL) printf("Problems with deleting the book in fpA!");

    while((c = getc(fpR)) != EOF) {
        while (c == booksName[i]) {
            c = getc(fpR);
            i++;
        }
        fputc(c, fpA);
    }

    fclose(fpR);
    fclose(fpA);

    fclose(fopen("H:\\C programming\\menu.txt", "w"));

    fpR = fopen("H:\\C programming\\menu.txt", "a");
    fpA = fopen("H:\\C programming\\menuForA.txt", "r");
        if (fpR == NULL) printf("Problems with deleting the book in fpR!");
        if (fpA == NULL) printf("Problems with deleting the book in fpA!");

    while((c = getc(fpA)) != EOF)
        fputc(c, fpR);

    fclose(fpR);
    fclose(fpA);

    fclose(fopen("H:\\C programming\\menuForA.txt", "w"));

    puts("Your book is deleted.");

}
