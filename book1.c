#include<stdio.h>
#include<stdlib.h>
void main()
{
    int choice,a[30],n,elem,pos;
    for(;;)
    {
        printf("\n1.create an array 2.Display\n");
        printf("3.Insert  4.Delete \n");
        printf("5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            printf("Enter the number of elements\n");
            scanf("%d",&n);
            printf("Enter %d elements\n",n);
            create(a,n);
            break;
            
            case 2:
            printf("The contents of array are\n");
            display(a,n);
            break;

            case 3:
            printf("Enter the items to be inserted : ");
            scanf("%d",&elem);
            printf("Enter the position: ");
            scanf("%d",&pos);
            n=insert(elem,a,n,pos);
            break;

            case 4:
            printf("Enter the position: ");
            scanf("%d",&pos);
            n=delete(a,n,pos);
            break;

            default:
            exit(0);
        }

        
    }
}
void create(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int insert(int elem,int a[],int n,int pos)
{
    int i;
    /*if(pos>n||pos<0)
    {
        printf("Invalid position");
        return n;
    }*/
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=elem;
    return n+1;
}
int delete(int a[],int n,int pos)
{
    int i;
    /*if(pos>=n||pos<0)
    {
        printf("Invalid position");
        return n;
    }*/
    printf("Item deleted =%d\n",a[pos]);
    for(i=pos+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    return n-1;
}