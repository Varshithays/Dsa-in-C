#include<stdio.h>
#include<stdlib.h>
void main()
{
    char op;
    float num1,num2,res=0;
    printf("Enter the arithmetic expression\n");
    scanf("%f%c%f",&num1,&op,&num2);
    switch(op)
    {
        case'+':
        res=num1+num2;
        break;
        case'-':
        res=num1-num2;
        break;
        case'*':
        res=num1*num2;
        break;
        case'/':if(num2!=0)
        res=num1/num2;
        else
        printf("Divide by zero error\n");
        break;
        case'%': res=(int)num1%(int)num2;
        break;
        default:printf("Invalid operator\n");
        exit(0);
    }
    printf("%f%c%f=%f\n",num1,op,num2,res);
}