/

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()

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