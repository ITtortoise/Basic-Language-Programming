#include<bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node *next;
};
node *root=NULL;
void insert_node(int roll)
{
    if(root==NULL)
    {
        root=new node();
        root->roll=roll;
        root->next=NULL;
    }
    else
    {
        node *current_node=root;
        while(current_node->next!=NULL)
        {
          current_node=current_node->next;
        }
        node *newnode=new node();
        newnode->roll=roll;
        newnode->next=NULL;

        current_node->next=newnode;
    }
}


void print()
{
    node *current_node=root;
    while(current_node!=NULL)
    {
        printf("%d\n",current_node->roll);
        current_node=current_node->next;
    }
}


int main()
{
    insert_node(1);
    insert_node(2);
    insert_node(6);
    delete_node(2);
    print();
    return 0;
}
