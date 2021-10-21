#include<stdio.h>//header
void main()//main function
{//body
    int first, second, next, n, i;//input variable
    first = 0;//initialize
    second = 1;//initialize
    printf("\nEnter a number to get the Fibonacci: ");//print enter the number
    scanf("%d", &n);//user input


    for(i=0; i<=n; i++)//loop
    {
        if(i<=1)//if condition is true then print 0
            next = i;//condition
        else//if condition is not true then follow the condition
        {
            next = first + second;//condition
            first = second;//condition
            second = next;//condition
        }
        printf("%d ", next);//print the numbers
    }


    printf("\n\n\n");//make gap
    return 0;//end
}
