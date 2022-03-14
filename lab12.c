/*#include<stdio.h>
#include<stdlib.h>

int key[20],n,m;
int *ht,index;
int count = 0;

void insert(int key)
{
            index = key % m;
            while(ht[index] != -1)
            {
                         index = (index+1)%m;
            }
            ht[index] = key;
            count++;
 }

void display()
{
           int i;
           if(count == 0)
          {
                         printf("\nHash Table is empty");
                         return;
           }

           printf("\nHash Table contents are:\n ");
           for(i=0; i<m; i++)
                      printf("\n T[%d] --> %d ", i, ht[i]);
}


void main()
{
         int i;
         printf("\nEnter the number of employee  records (N) :   ");
         scanf("%d", &n);

         printf("\nEnter the two digit memory locations (m) for hash table:   ");
         scanf("%d", &m);

         ht = (int *)malloc(m*sizeof(int));
         for(i=0; i<m; i++)
                     ht[i] = -1;

         printf("\nEnter the four digit key values (K) for N Employee Records:\n  ");
         for(i=0; i<n; i++)
                    scanf("%d", &key[i]);

         for(i=0;i<n;i++)
        {
                   if(count == m)
                   {
                        printf("\n~~~Hash table is full. Cannot insert the record %d key~~~",i+1);
                        break;
                   }
                   insert(key[i]);
    }

            //Displaying Keys inserted into hash table
             display();
}
#include<stdio.h>
#include<stdlib.h>
#define HASH_SIZE 5
void initialize_hash_table(int a[])
{
     int i;
     for(i=0;i<HASH_SIZE;i++)
     a[i]=0;
}
int H(int k)
{
     return k % HASH_SIZE;
}
void insert_hash_table(int item,int a[])
{
     int i,index,h_value;
     h_value = H(item);
     for(i=0;i<HASH_SIZE;i++)
     {
          index = (h_value+i)%HASH_SIZE;
          if(a[index]==0) break;
     }
     if(a[index]==0)
          a[index] = item;
     else
          printf("Hash table is full \n");
}
void display_array(int a[], int n)
{
     int i;
     for(i=0; i<n; i++)
     {
          printf("%d", a[i]);
     }
}
void main()
{
     int a[10],item,key,choice,n;
     initialize_hash_table(a);
     for(;;)
     {
          printf("1.Insert 2.Display 3.Exit\n");
          printf("Enter the choice ");
          scanf("%d",&choice);
          switch(choice)
          {
               case 1:printf("Enter the item: ");
                    scanf("%d",&item);
                    insert_hash_table(item,a);
                    break;
               case 2:printf("Contents of hash table \n");
               display_array(a,n);
               break;
               
               default: exit(0);
               
          }
     }
}*/
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#define m 5
int a[10],l;
void init_hashtable()
{
int i;
for(i=0;i<m;i++)//m is hash size
a[i]=0;
}
void display()
{
int i;
printf("******Hash table ******\n");
printf("Locat :");
for(i=0;i<m;i++)//print location
{
printf(" %d\t",i);
}
printf("\n");
printf("Value :");
for(i=0;i<m;i++)//print the values
{
printf(" %d\t",a[i]);
}
}
int compute_hashvalue(int k)
{
return k%m;
}
void main()
{
int i,k,ch,c=0;
init_hashtable();//initialize hash values to 0
display();// display the hash table
printf("\n1.Insert key\n2.Resolve collision-Linear Probing\n3.Exit \n");
while(1)
{
printf("\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the key k which is a four digit integer: ");
          scanf("%d",&k);
l=compute_hashvalue(k);
printf("\nThe item is: %d \nThe position is: %d\n",k,l);
if(a[l]!=0)//detect collision
{
printf("!!! COLLISION HAS OCCURED !!!\n");
break;
}
else
{
a[l]=k;
display();
}
break;
case 2:c=0;
while(a[l]!=0 && c<m)
{
l=(l+1)%m;
c++;//find empty slot using linear probing
}
if(c==m)//insert if empty slot found
{
printf("Hash table full \n");
}
else{
a[l]=k;
display();
}break;
case 3:exit(0);
break;
default: printf("WRONG CHOICE ");
break;
}
}
}