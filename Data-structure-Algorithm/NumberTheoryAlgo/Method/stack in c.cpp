#include<stdio.h>
#define MAX 5
int push(int);
int pop();
int display();
int top=-1;
int stack[MAX];
int main()
{
    int choice,n;
    while(1)
    {
        printf("enter your choice:");
        scanf("%d",&choice);
        printf("press 1 for push\npress 2 for pop\npress 3 for display\npress 4 for exit\n");
        switch(choice)
        {
        case 1:
            printf("enter the element to insert:\n");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();

        case 3:
            printf("inserted elements are:\n");
            display();
            break;
        }
    }
}
int push(element)
{
    if(top==MAX-1)
        printf("stack is overflow\n");

    top=top+1;
    stack[top]=element;
}
int pop()
{
    int element;
    element=stack[top];
    printf("deleted elements are:\n%d\n",element);
}
int display()
{
    int i;
    for(i=0; i<=top; i++)
        printf("%d\n",stack[i]);
}

