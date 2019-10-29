#include<bits/stdc++.h>
#define MAX 3
using namespace std;
int queue_array[MAX];
void insert();
void delet();
void display();
int rear = - 1;
int front = - 1;
main()
{
    while(1){int n;
    cout<<"1 for insert2 for delete3 for display......."<<endl;
    cin>>n;
    switch(n)
    {
    case 1:
    {
        insert();
        break;
    }
    case 2:
        {
            delet();
            break;
        }

    case 3:
    {
        display();
        break;
    }
    case 4:
        exit(1);
    }
    }
}
void insert()
{   int v;
    if(front==-1)
        front=0;
        cin>>v;
        rear++;
        queue_array[rear]=v;


}
void delet()
{
   int e=queue_array[front];
   cout<<"deleting element is"<<e<<endl;
   front++;
}
void display()
{
    for(int i=front;i<=rear;i++)
        cout<<queue_array[i]<<" ";
}
