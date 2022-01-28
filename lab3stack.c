#include<stdio.h>
 
#include<stdlib.h>
  
#define Size 10 
  
int top=-1, s[Size];
void Push();
void Pop();
void palindrome();
void display();
  
int main()
{
    int choice;
     
    do    
    {
        printf("\nStack operations");
        printf("\n1.Push the element\n2.Pop the element\n3.Check palindrome\n4.display stack elements\n5.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
         
        switch(choice)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: palindrome();
                    break;
            case 4: display();
                    break;
            case 5: exit(0);
             
            default: printf("\nInvalid choice!!");
        }
    }while(choice<=5);
}
  
void Push()
{
    int item;
     
    if(top==Size-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d",&item);
        top=top+1;
        s[top]=item;
    }
}
  
void Pop()
{
    if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element:  %d",s[top]);
        top=top-1;
    }
}
void palindrome()
{
    int i,count;
    for(i=0;i<top/2;i++)
    {
        if(s[i]==s[top])
        count=1;
    }
    if(count==1)
    printf("the stack contents are palindrome");
    else
    printf("the stack contents are not palindrome");
}
void display()
{
     
     
    if(top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack:\n");
        for(int i=top;i>=0;i--)
            printf("%d\n",s[i]);
    }
}
