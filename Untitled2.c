#include <stdio.h> /// Library function
#define INFINITY 9999

void SingleSource(int graph[50][50], int qv, int
start_ver); /// function prototype

void main() /// main function
{
int graph[50][50],qv, start_ver; /// take integer
type 2D array and two normal integer variable
int i,j;

printf("\nEnter the quantity of vertexes:");
scanf("%d", &qv); /// get input from user for qv

printf("\nEnter the values for path costs
matrix:\n");
for(i=0; i< qv; i++) /// the loop will continue
until i is less than qv
for(j=0; j<qv; j++) /// the loop will continue
until j is less than qv

scanf("%d", &graph[i][j]); /// get input from
user for insert value in the 2D array index

printf("\nEnter the starting vertex:");
scanf("%d",&start_ver); /// get input from user for
start_ver

SingleSource(graph, qv, start_ver); /// call
function

printf("\n\n\n");
return 0; /// this main function return nothing
}

void SingleSource(int graph[50][50], int qv, int
start_ver) /// make function with 3 parameter
{
int eadgecost[50][50]; /// take a 2D array
int distance[20]; /// take array

int gen[50]; /// take array
int visited[50]; /// take array
int i,j;

for(i=0; i<qv; i++)
for(j=0; j<qv; j++)
if (graph[i][j]==0) /// if any index of this 2D
array value will be 0 the condition will true

eadgecost[i][j]= INFINITY; /// define the
eadgecost 2D array all index as infinity if condition
true
else
eadgecost[i][j] = graph[i][j];///
eadgecost 2D array and graph 2D array value will be same
if condition false

for(i=0; i<qv;i++) /// Start loop
{
distance[i]= eadgecost[start_ver][i]; /// define
the distance array

gen[i] = start_ver; /// the value of start_ver
put into the gen array
visited[i]= 0; /// define visited raay as 0
}
distance[start_ver]=0;
visited[start_ver] = 1;

int count_round = 1;
int minimum_dist;
int ahead_ver;

while(count_round < qv-1) /// the loop will continue
until qv-1 less than count_round
{
minimum_dist = INFINITY; /// define minimum_dist
as infinity

for(i=0; i<qv; i++)
if(distance[i] < minimum_dist&&!visited[i])

{
minimum_dist = distance[i]; /// put the
distance array value into minimum_dist
ahead_ver = i; /// put the i value into
ahead_ver
}

visited[ahead_ver] = 1;

for (i=0; i<qv;i++)
if(!visited[i])
if(minimum_dist+eadgecost[ahead_ver][i] <
distance[i])
{
distance[i] = minimum_dist +
eadgecost[ahead_ver][i];
gen[i] = ahead_ver;
}

count_round++; /// increament the value of
count_round by 1
}

for(i=0; i<qv; i++)
if(i != start_ver)
{
printf("\nDistance of %d = %d", i, distance[i]);
printf("\nShow Path = %d",i);

j = i;

do
{
j= gen[j];/// a->c->f
printf("<<< %d",j);
}while (j != start_ver); /// if j is not equal
to start_ver the condition will true

printf("\n");
///=========================
}
}
