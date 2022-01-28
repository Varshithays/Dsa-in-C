/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void add_at_end(struct node *head,int data){
    struct node *ptr, *temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter node  data : ");
    scanf("%d",temp->data);
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void add_at_end()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter node  data : ");
    scanf("%d",temp->data);
    temp->link=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else{
    struct node *p;
    p=root;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link=temp;
    }

}
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data=34;
    head->link=NULL;

    struct node *ptr = head;
    ptr=add_at_end(ptr,98);
    ptr= add_at_end(ptr,45);
    ptr=add_at_end(ptr,77);

    ptr=head;

    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}
#include<stdio.h>
int main(){
    head=del_last(head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->head);
        ptr=ptr->link;
    }
    return 0;
}*/
#include <stdio.h>
 
//linked list node structure
struct node{
 
    int data;
    struct node* next;
};
 
struct node* head;
 
void insert(int data){
 
    /* Allocate memory*/
    struct node* temp = (struct node*)malloc(sizeof(struct node));
 
    temp->data = data;
    temp->next = head;
 
    head = temp;
 
}
 
void print(){
 
    struct node* temp = head;
 
    int count=0;
 
    /* Traverse the linked list and maintain the count. */
 
    while(temp != NULL){
 
       temp = temp->next;
       count++;
 
    }
 
    printf("\n Total no. of nodes is %d",count);
 
}
 
void main(){
 
    head = NULL;
 
    insert(2);
    insert(4);
 
    /* calling print function to print the count of node. */
    print();
 
}