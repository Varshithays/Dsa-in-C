#include<stdio.h>
#include<stdlib.h>
int a[20];
int n,val,i,item,pos;

void create(int a[],int n);
void display(int a[],int n);
int ins(int a[],int n, int pos);
int del(int a[],int n,int pos);

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
int ins(int a[],int n, int pos)
{
    int item;
    int i;
    if(pos>n||pos<0)
    {
        printf("Invalid position\n");
        return n;
    }
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=item;
    return n+1;
}
int del(int a[],int n,int pos)
{
    int i;
    if(pos>=n||pos<0)
    {
        printf("Invalid position\n");
        return n;
    }
    printf("Item deleted = %d\n",a[pos]);
    for(i=pos+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    return n-1;
}

int main()
{
    int choice =1;
    while(choice)
    {
        printf("\nEnter 1 for create an  array \n Enter 2 for array display\n Enter 3 for inserting an element in the array\n Enter 4 for deleting an element in the array \n Enter any other number to exit\n\n");
        scanf("%d",&choice);
    {
        switch(choice)
        {
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d",&n);
                printf("Enter %d elements\n",n);
                create(a,n);
                break;
            case 2:
                printf("The elements of the array are: ");
                display(a,n);
                break;
            case 3:
                printf("Enter the element to be inserted: ");
                scanf("%d",&item);
                printf("Enter the position:");
                scanf("%d",&pos);
                ins(a, n, pos);
                break;
            case 4:
                printf("Enter the position: ");
                scanf("%d",&pos);
                del(a, pos, n);
                break;
            default : ("\n Invalid choice: \n");
                exit(0);
        }
    }
        
    }
}
