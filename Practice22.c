#include <stdio.h>
int main(void)
{
    int num = 37;
    int num2 = 6;
    int rem = 0;
    int sum = 0;

    sum = num / num2;

    rem = num % num2;

    printf("%d\n", sum);
    printf("%d", rem);
    return 0;
}
