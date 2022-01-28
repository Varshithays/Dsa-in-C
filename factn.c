
#include<stdio.h>  
int main()  
{  
    int i,num, fact = 1;  
  
    printf("Enter a number to find its Factorial\n");  
    scanf("%d", &num);  
  
    for(i = 1; i <= num; i++)  
    {  
        fact = fact * i;  
    }  
  
    printf("Factorial of %d is %d\n", num, fact);  
  
    return 0;  
}  
