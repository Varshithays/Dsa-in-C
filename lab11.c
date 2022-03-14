/*#include<stdio.h>
#include<stdlib.h>
void create(int a[10][10],int n)
{
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
}
void bfs(int a[10][10],int n,int u)
{
int f,r,q[10],v;
int s[10]={0};
printf("Nodes visited from %d are:",u);
f=0,r=-1;
q[++r]=u; //insert u into q
s[u]=1;
printf("%d",u);
while(f<=r)
{
u=q[f++];
for(v=0;v<n;v++)
{
if(a[u][v]==1)
{
if(s[v]==0)
{
printf("%d",v);
s[v]=1;
q[++r]=v;
}//end if
}//end if
}//end for
}//end while
printf("\n");
}//end function
void main()
{
int n,a[10][10],src,i,j;
printf("Enter the number of cities :");
scanf("%d",&n);
printf("Enter the adjacency matrix \n");
create(a,n);
for(src=0;src<n;src++)
bfs(a,n,src);
}//end main*/
#include<stdio.h>
#include<conio.h>
int a[10][10], s[10], n;
void read_AM( int a[10][10], int n)
{
int i,j;
//read n value
for( i=0; i<n; i++)
{
for (j=0; j<n; j++)
{
scanf("%d", &a[i][j]);
}
}
} 
void dfs(int u)
{
int v;
s[u]=1;
printf("%d",u);
for(v=0; v<n; v++)
{
if(a[u][v]==1 && s[v]==0)
dfs(v);
}
}
void main()
{
int i, source;
printf("Enter the number of nodes in the graph: \n");
scanf("%d",&n);
printf("Enter the adjacency matrix: \n");
read_AM(a,n);
for(source=0; source<n; source++)
{
for(i=0; i<n; i++)
s[i]=0;
printf("The nodes reachable from %d: \n", source);
dfs(source);
}
} 