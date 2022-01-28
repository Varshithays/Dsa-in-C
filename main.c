/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int a[10],elem,i,n,pos,key;
void create()
{
    printf("\n Enter the size array of elements\n");
    scanf("%d",&n);
    printf("\n Enter elements for array ");
    for(i=0;i<n;i++)
    scanf("%d",a[i]);
}
void display()
{
    int i;
    printf("the array elements are\n");
    for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}
void insert()
{
    printf("enter the position for new element\n");
    scanf("%d",pos);
    printf("enter the element to be inserted\n");
    scanf("%d",elem);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=elem;
    n=n+1;
}
void delete()
{
    printf("Enter the position to be deleted\n");
    scanf("%d",&pos);
    elem=a[pos];
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("the deleted item is %d",elem);
}
void main()
{
int key;
do
{
    printf("....Menu...\n");
    printf("1. Create\n ,2.Display\n,3.Insert\n,4.Delete\n,5.exit(0)\n");
    printf("enter your choice");
    scanf("%d",&key);
    switch(key)
    {
        case 1: create();
        break;
        case 2: display();
        break;
        case 3: insert();
        break;
        case 4: delete();
        break;
        case 5: exit(0);
        break;
        default:printf("Invalid choice");
        break;
    }
}while(key);!=5;
return 0;
}




    
