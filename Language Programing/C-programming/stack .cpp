#include<bits/stdc++.h>
#define MAX 3
using namespace std;
int stack_array[MAX];
int push(int);
void pop();
void display();

int top=-1;
int main()
{
   while(1)
     {
        int n,v;
   cout<<"press 1 for push2 for pop3 for display4 for exit"<<endl;
   cin>>n;
   switch(n)
   {
   case 1:
       {cin>>v;
       push(v);
       break;}
   case 2:
    {pop();
    break;}
   case 3:
    {display();
    break;}
   case 4:
    exit(1);

   }
    }
   e:
    return 0;
}
   int push(int a)
   {
      top=top+1;
      stack_array[top]=a;

   }
   void pop()
   {
       int e=stack_array[top];
       cout<<"deleting element is:"<<e<<endl;
   }
   void display()
   {
       for(int i=0;i<top;i++)
        cout<<stack_array[i]<<" ";
   }




