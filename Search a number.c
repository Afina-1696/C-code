#include<stdio.h>
void main()
{
    int arr[100], i , find, signal=0;
    printf("\nEnter 10 integer: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter a integer number to find out it: ");
    scanf("%d", &find);

    for(i=0; i<10; i++)
    {
        if(find = arr[i])
            signal = 1;
    }
    if(signal == 1)
    {
        printf("%d is in the array", find);
    }
    else
    printf("%d is not in the array", find);

    printf("\n\n\n");
    return 0;
}
