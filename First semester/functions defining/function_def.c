#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Возведение в степень целых чисел
long pow_my(long a, long b) {
        long i = 1;
        long result;

        for (i=1; i<=b; i++)
            (i==1)? (result=a): (result*=a);

    return (result);
}



// Проверка функций
int main()
{
   printf("The firs function............................\nThe result is %d\n", pow_my(5, 8));

   return 0;
}
