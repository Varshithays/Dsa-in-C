#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define N 10
int queue[N];
int front = -1;
int rear = -1;
void insert(int x)
{
    //check full?
    if(((rear==N-1)&&(front==0)) || (rear==(front-1)))//or if(count == N)
    printf("Queue is full/Overflow!");
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
        if(front==-1)
        front=0;
    }
}
void delete()
{
    //check empty ?
    //if(front==-1)or
     if(front>rear)
    printf("queue is empty/Underflow!");
    else
    {
        //if only one element
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        front=(front+1)%N;
    }
}
void display()
{
    int i= front;
    if(front==-1 && rear==-1)
    {
       printf(" queue is empty");
    }
    else
    {
        printf("Queue elements are :\n ");
        while(i!=rear)
        {
            printf("%3d",queue[i]);
            i=(i+1)%N;
        }
        printf("%3d",queue[rear]);
    }
}
int main()
{
    int x,ch;
    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.exit\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter the element to be inserted: ");
                scanf("%d",&x);
                insert(x);
                break;
            case 2:delete();
                break;
            case 3:display();
                break;
            case 4:exit(0);
            default:printf("\n wrong choice!");
        }
    }
}