//Push Function in C
void push()
{
int n;
printf ("\n Enter item in stack");
 scanf ("%d", &n);
if(top==size-1)
{
printf("\nStack is Full");
}
else
{
top = top+1;
stack[top]=n;
}
}

//Pop Function in C
void pop()
{
int item; if(top==-1)
{
printf("\n Stack is empty");
}
else
{
item=stack[top];
printf("\n item popped is=%d", item);
top--;
}
}
