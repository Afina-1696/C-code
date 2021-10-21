#include <stdio.h>//header
#define infinity 999//define the value of infinity is 999


int search(int p);//parameter
int combination(int u,int v);//parameter


int vertx, edge=1, i, j,p;//variables
int edgecost[10][10], parent[10];//take array
int min, mincost = 0;//take variables
int assign1, assign2;//take variables
int u,v;//take variables


void main()//main function
{//body
    printf("\nEnter the quantity of vertexes: ");//print the text
    scanf("%d", &vertx);//enter the value of vertex


    printf("\nEnter the values of edgecost as a matrix: ");//print the text
    for(i=1; i<=vertx; i++)//loop for x axis of a matrix
    {
        printf("\n");//gap
        for(j=1; j<=vertx; j++)//loop for y axis of a matrix
        {
            printf("\nKruskal[%d][%d]: ", i, j);//print the text
            scanf("%d", &edgecost[i][j]);//take value


            if(edgecost[i][j]==0)//if condition
                edgecost[i][j] = infinity;//condition
        }
    }
    printf("\nThe edges of minimum cost spanning tree(s) are: \n\n");//print the text
    while(edge<vertx)//loop
    {
        for(i=1, min = infinity; i<= vertx; i++)//lop
        {
            for(j=1; j<=vertx; j++)//loop
            {
                if(edgecost[i][j] < min)//condition
                {
                    min = edgecost[i][j];//condition
                    assign1 = u = i;//condition
                    assign2 = v = j;//condition
                }
            }
        }


        u = search(u);//function call
        v = search(v);//function call


        if(combination(u,v))//condition
        {
            printf("\n%d edge(%d,%d) = %d", edge++, assign1,assign2,min);//print the text
            mincost = mincost+min;//condition
        }
        edgecost[assign1][assign2] = edgecost[assign2][assign1] = infinity;//condition
    }
    printf("\nMinimum cost = %d", mincost);//print  the text


    printf("\n\n\n");//gap
    return 0;//end
}


int search(int p)//function
{
    while(parent[p])//loop
        p = parent[p];//condition
    return p;//end
}


int combination(int u,int v)//function
{
    if(u!=v)//if condition
    {
       parent[v] = u;//condition
       return 1;
    }
    return 0;//end
}
