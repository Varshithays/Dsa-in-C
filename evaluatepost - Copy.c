/*#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
    {
        case '+': return op1+op2;
        case '-': return op1-op2;
        case '*': return op1*op2;
        case '/': return op1/op2;
        case '$':
        case '^o': return pow(op1,op2);
    }
}
void main()
{
    double s[20],res,op1,op2;
    int top,i;
    char postfix[20],symbol;
    printf("\nEnter postfix expression\n");
    scanf("%s",postfix);
    top=-1;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        s[++top]=symbol-'0';
        else{
            op2=s[top--];
            op1=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;
        }
    }
res=s[top--];
printf("The result is %f\n",res);
}*/
#include<stdio.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}
int main()
{
    char exp[20];
    char *s;
    int n1,n2,n3,num;
    printf("Enter the expression : ");
    scanf("%s",exp);
    s = exp;
    while(*s != '\0')
    {
        if(isalnum(*s))
        {
            num = *s - 48;//ascci value satisfied
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*s)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        s++;
    }
    printf("\nThe result of expression %s  is  %d\n\n",exp,pop());
    return 0;
}