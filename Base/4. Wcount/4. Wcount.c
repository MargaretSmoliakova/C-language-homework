#include <stdio.h>
#include <stdlib.h>

int main() {
    int counter, summary, list;

    printf("While count.\n");

    counter = 0;
    list = 1;
    summary = 0;

    while (counter <= 10) {
        printf("%d__________________\n\n", list);
        printf("integer: %d\n", counter);

        summary += counter;
        list++;
        counter++;

        printf("summary: %d\n\n", summary);
    }

    return 0;
}
