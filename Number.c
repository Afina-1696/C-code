#include<stdio.h>
void main()
{
int stnum, endnum, incrnum;
printf("\n\nEnter a starting number: ");
scanf("%d", &stnum);
printf("\n\nEnter an ending number: ");

scanf("%d", &endnum);
printf("\n\nEnter a value to increment: ");
scanf("%d", &incrnum);
int sl = 1;
while (stnum <= endnum)
{
stnum = stnum + incrnum;
if(stnum > 10)
{
break;
}
if(stnum%2 == 1)
{
continue;
}
printf("\nThe number on the place of '%d' is: %d ", sl, stnum);
sl = sl + 1;
}
printf("\n\nThere are %d numbers", sl-1);
printf("\n\n\n\n");
return 0;
}
