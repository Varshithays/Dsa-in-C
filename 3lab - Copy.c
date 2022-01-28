#include<stdio.h>
 
#include<stdlib.h>
  
#define Size 10 
  
int Top=-1, arr[Size];
void Push();
void Pop();
void pal();
void dis();
  
int main()
{
    int choice;
     
    while(1)    
    {
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.pal\n4.dis\n5.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
         
        switch(choice)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: pal();
                    break;
            case 4: dis();
                    break;
            case 5: exit(0);
             
            default: printf("\nInvalid choice!!");
        }
    }
}
  
void Push()
{
    int item;
     
    if(Top==Size-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d",&item);
        Top=Top+1;
        arr[Top]=item;
    }
}
  
void Pop()
{
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element:  %d",arr[Top]);
        Top=Top-1;
    }
}
void pal()
{
    int i,front;
    for(i=0;i<=Top/2;i++)
    {
        if(arr[i]==arr[Top])
        front++;
    }
    if(front>0)
    printf("the stack contents are palindrome");
    else
    printf("the stack contents aren't palindrome");
}
void dis()
{
     
     
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for(int i=Top;i>=0;i--)
            printf("%d\n",arr[i]);
    }
}