#include <stdlib.h>
#include <stdio.h>

// Игра: угодай, будет ли следующее число больше, меньше предыдущего или ему равно.

int main ()
{
    int r1, r2;
    int i, a;
    char y;

    puts ("Do you want to play?(y/n)");
    y = getche();

   // Выбор альтернатив да/нет

    if (y=='y') {
        r2 = rand()%100;
        printf("\nThank you!\nThe game is starting from the number %d\nDuring the play you could always stop the game by entering '0' number", r2);

        for (i=0; ; i++){       // цикл игры
            printf("\nGuess, the next number is going to be higher, lower or the same (h/l/s):.....\n");
            y = getche();
            if (y=='0') {break;}
            if (i==0) {a=r2;}
            r1 = rand()%100;
            printf("\nThe next random number is %d\n", r1);

            switch (y) {
                case 'h': (a<r1) ? printf("great\n"): puts("Not today....1");
                            break;
                case 'l': (a>r1) ? printf("congratulations\n"): puts("Not today....2");
                            break;
                case 's': (a==r1) ? printf("uhu\n"): puts("Not today....3");
                            break;
            }
            a = r1;
        }
    } else {
        puts ("\nSo sorry ..... I'll miss you :( ..... buy.......");
    }
	return 0;
}
