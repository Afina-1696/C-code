#include<stdio.h>
void main()
{
    int arr[100], i, summ, k;
    summ = 0;
    printf("Enter the size of array: ");
    scanf("%d", &k);

    printf("\n Enter the elements: ");
    for(i = 0; i<k; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<k; i++)
    {
        summ = summ + arr[i];
    }
    printf("\nThe summation of 1D array is %d", summ);
    printf("\n\n\n");

    return 0;
}
