#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    //float data;
    struct node *link;
};

void main(){
    //1
    struct node *head=malloc(sizeof(struct node));
    head->data=8;
    head->link=NULL;
    //printf("%d\n",head->data);

    //2
    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    head->link=NULL;
    head->link=current;
   // printf("%d",current->data);

//3
    current=malloc(sizeof(struct node));
    current->data=9;
    current->link=NULL;
    head->link->link=current;
}
void count_of_nodes(struct node * head){
     int count = 0;
     if(head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!= NULL){
        count++;
        ptr=ptr->link;
    }
        printf("%d",count);
}