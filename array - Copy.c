#include<stdio.h>
#include<stdlib.h>
int a[20];
int n,val,i,pos;

void create();
void display();
void insert();
void delete();

void main()
{
    int choice =1;
    while(choice)
    {
        printf("1.MENU\n");
        printf("2.CREATE\n");
        printf("3.DISPLAY\n");
        printf("4.DELETE\n");
        printf("5.EXIT\n");
        printf("\n Enter your choice: \t");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                delete();
                break;
            case 5:
                exit(0);
            default : ("\n Invalid choice");
                break;
        }
    }
    
}
//Creating an array
void create();
    printf("Enter size of elements\n");
    scanf("%d",&n);
    printf("enter elements for array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

void dispaly()
{
    int i;
    printf("the array elements are\n");
    {
        printf("%d",a[i]);
    }
}
void insert()
{
    printf("Enter position for new element");
    scanf("%d",&pos);
    printf("Enter element to be inserted");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1] = a[i];
    }
    a[pos] =val;
    n =n+1;
}
void delete()
{
    printf("enter position of element to delete : \t");
    scanf("%d",&pos);
    val =a[pos];
    for(i=pos;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n =n-1;
    printf("The dleted element is = %d",val);
}
