#include <stdio.h>
void main()
{
    int num, decimal_num = 0, base = 1, rem;
    printf (" Enter a binary number: ");
    scanf ("%d", &num);

    while ( num > 0)
    {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }

    printf (" \n The decimal number is: %d \n\n\n", decimal_num);

    return 0;
}
