#include<stdio.h>
#define INFINITY 99
void shortest_path(int ssg[10][10], int vrtxs, int str_vrtx);
void main()
{
    int ssg[10][10],i,j,vrtxs,str_vrtx;


    printf("\n\nEnter the amount of vertexes: ");
    scanf("%d", &vrtxs);


    printf("\n\nEnter edges cost as array:\n");
    for(i=0; i<vrtxs; i++)
        for(j=0; j<vrtxs; j++)
          scanf("%d", &ssg[i][j]);


    printf("\nEnter the starting vertex: ");
    scanf("%d", &str_vrtx);


    shortest_path(ssg, vrtxs, str_vrtx);


    printf("\n\n\n\n");
    return 0;
}


void shortest_path(int ssg[10][10], int vrtxs, int str_vrtx)
{
   int edgecost[10][10],distance[10],exp[10],i,j, origine[10];
   for(i=0; i<vrtxs; i++)
        for(j=0; j<vrtxs; j++)
            if(ssg[i][j]==0)
            edgecost[i][j] = INFINITY;
            else
               edgecost[i][j] = ssg[i][j];


   for(i=0; i<vrtxs; i++)
   {
       distance[i]= edgecost[str_vrtx][i];
       origine[i] = str_vrtx;
       exp[i]= 0;
   }
   distance[str_vrtx] = 0;
   exp[str_vrtx] = 1;


   int mindist, next_vrtx, round;


   while(round < vrtxs-1) /// 0th round = 1st round
   {
       mindist = INFINITY;


       for(i=0; i<vrtxs; i++)
       if (distance[i] < mindist&&!exp[i])
       {
           mindist = distance[i];
           next_vrtx = i;
       }


       exp[next_vrtx] = 1;
       for(i=0; i<vrtxs; i++)
       // if(!exp[i])
       if(mindist + edgecost[next_vrtx][i] < distance[i])
       {
         distance[i] = mindist + edgecost[next_vrtx][i];
         origine[i] = next_vrtx;
       }
       round++;
   }


   for(i=0; i<vrtxs; i++)
    if(i!= str_vrtx)
   {
       printf("\nDistance of %d = %d", i, distance[i]);
       printf("\nPath = %d", i);


       j=i;
       do
       {
           j = origine[i];
           printf("<<<<%d", j);
       } while (j != str_vrtx);
        printf("\n\n");
   }
}
