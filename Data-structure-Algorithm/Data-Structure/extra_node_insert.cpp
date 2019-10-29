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
void addNodeAtPos(int roll,int pos)
{
    node *pre=new node();
    node *curr=new node();
    node *newNode=new node();
    newNode->roll=roll;

    int tempos=0;
    curr=root;
    if(root!=NULL)
    {
        while(curr->next!=NULL && tempos!=pos)
        {
            pre=curr;
            curr=curr->next;
        }
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
    insert_node(3);
    insert_node(4);
    insert_node(6);
    addNodeAtPos(5,5);
    print();
    return 0;
}

