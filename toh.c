#include<stdio.h>
//#include<conio.h>
void toh(int,char,char,char);

void main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    printf("sequence of moves of tower of Hanoi: \n");
    toh(n,'A','C','B');
}
void toh(int n,char source,char destination,char temp)
{
    if(n==1)
    {
        printf("\n move disk 1 from source %c to destination %c",source,destination);
        return ;
    }
    toh(n-1,source,temp,destination);
    printf("\n move disk %d from source %c to destination %c",n,source,destination);
    toh(n-1,temp,destination,source);
}
/*#include<stdio.h>
#include<conio.h>
#include<math.h>

void tower(int n,int source ,int temp,int destination)
{
    if(n==0)
    return ;
    tower(n-1,source,destination,temp);
    printf("move disc %d from %c to %c \n",n,source,destination);
    tower(n-1,temp,source,destination);
}
void main()
{
    int n;
    printf("enter the number of discs : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\n\nTotal Number of moves are: %d", (int)pow(2,n)-1);
}*/

