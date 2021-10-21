#include <stdio.h>//header file

void disk(int, char, char, char);peramitter call

int main()//main function
{
    int num;//declare variable

    printf("Enter the number of disks: ");//print the text
    scanf("%d", &num);//user input
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");//print the text
    disk(num, 'A', 'C', 'B');//cal the function
    return 0;//end
}
void disk(int num, char first, char secound, char third)//function
{
    if (num == 1)//if the condition is true follow the sequence
    {
        printf("\n Move disk 1 from peg %c to peg %c", first, secound);// print the text
        return;
    }
    else//if the condition is not true follow the bellow sequence
    {
    disk(num - 1, first, third, secound);//call the function and pass the values
    printf("\n Move disk %d from peg %c to peg %c", num, first, secound);//print it
    disk(num - 1, third, secound, first);//call the function and pass the values
    }
}
