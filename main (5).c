/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
struct person
{
char name[10];
int age;
float salary;
};
struct person p1;
strcpy(p1.name,"varshitha");
p1.age=22;
p1.salary=100000;
printf("\n name=%s age=%d salary=%f",p1.name,p1.age,p1.salary);
}
/*Array of Structures
An array of structure can also be declared. Each element of the array representing a s*/