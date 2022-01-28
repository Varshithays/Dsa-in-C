/*#include<stdio.h>
#include<string.h>
void F(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-': return 2;
        case '*':
        case '/': return 4;
        case '^':
        case '$': return 5;
        case '(': return 0;
        case '#': return -1;
        
    }
}
int G(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':return 1;
        case '*':
        case '/':return 3;
        case '^':
        case '$':return 9;
        case '(':return 9;
        case ')':return 0;
      
    }
}
void infixtopostfix(char infix[],char postfix[])
{
    int i,j,n,top;
    char s[30];
    char symbol;
    top = -1;
    s[top] = '#';
    j=0;
    n=strlen(infix);
    for(i=0;i<n;i++)
    {
        symbol=infix[i];
        while(F(s[top])>G(symbol))
        postfix[j++]=s[top--];
        if(F(s[top])!=G(symbol))
        s[++top]=symbol;
        else
        top--;
    }
while(s[top]!='#')
postfix[j++]=s[top--];
postfix[j]='\0';
}
void main()
{
    char infix[20];
    char postfix[20];
    printf("Enter a valid infix expression\n");
    scanf("%s",infix);
    infixtopostfix(infix,postfix);
    printf("The postfix expression is \n");
    printf("%s",postfix);
}*/
/*#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}*/

#include<stdio.h>
#include<ctype.h>

char stack[50];
int top = -1;

void push(char symbol)
{
    stack[++top] = symbol;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char symbol)
{
    if(symbol == '(')
        return 0;
    if(symbol == '+' || symbol == '-')
        return 1;
    if(symbol == '*' || symbol == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *s, t;
    printf("Enter the  infix expression : ");
    scanf("%s",exp);
    printf("\n");
    s = exp;
    
    while(*s != '\0')
    {
        if(isalnum(*s))
            printf("%c ",*s);
        else if(*s == '(')
            push(*s);
        else if(*s == ')')
        {
            while((t = pop()) != '(')
                printf("%c ", t);
        }
        else
        {
            while(priority(stack[top]) >= priority(*s))
                printf("%c ",pop());
            push(*s);
        }
        s++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}