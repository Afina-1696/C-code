#include <stdio.h>

int main()
{
    int base=2, power=4;
    int product = base,counter=1;
    while(counter<power)
    {
        product = product*base;
        counter = counter+1;
    }
    printf("\n2^4 = %d", product);
    printf("\n\n\n");
    return 0;
}

