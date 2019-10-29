#include<stdio.h>
#define MAX 3
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

        printf("press 1 for push\npress 2 for pop\npress 3 for display\npress 4 for exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the element to insert:");
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();

        case 3:
            printf("elements are:\n");
            display();
            break;
        case 4:
            goto e;
        }
    }
    e:
    return 0;
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
    int e;
    e=stack[top];
    top=top-1;
    printf("deleted elements are:\n%d\n",e);
}
int display()
{
    int i;
    for(i=0; i<=top; i++)
        printf("%d\n",stack[i]);
}

