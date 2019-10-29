#include<bits/stdc++.h>
using namespace std;
void knapsack(int n,float w[],float p[],float capacity)
{
    int i,j,u;
    float x[20],tp=0;
    u=capacity;
    for(i=0;i<n;i++)
        x[i]=0.0;
    for(i=0;i<n;i++)
    {
        if(w[i]>u)
            break;
        else
        {
            x[i]=1.0;
            tp=tp+p[i];
            u=u-w[i];
        }

    }
    if(i<n)
    {
        x[i]=u/w[i];
    }
    tp=tp+(x[i]*p[i]);
    cout<<"result is:" <<endl;
     cout<<tp<<endl;
}
int main()
{
    float capacity,temp;
    int n,i,j;
    cout<<"enter the number of object:"<<endl;
    cin>>n;
    float w[n],p[n],r[n];
    cout<<"enter the weight and profit for each product:"<<endl;
    for(i=0; i<n; i++)
        cin>>w[i]>>p[i];
    cout<<"enter the capacity:"<<endl;
    cin>>capacity;
    cout<<"the enitial ratio of corresponding elements:"<<endl;
    for(i=0; i<n; i++)
    {
        r[i]=p[i]/w[i];
        cout<<r[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(r[i]<r[j])
            {
                temp=r[i];
                r[i]=r[j];
                r[j]=temp;
                temp=w[i];
                w[i]=w[j];
                w[j]=temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;


            }
        }
    }
    cout<<"the sorted ratio:"<<endl;
     for(i=0;i<n;i++)
        cout<<r[i]<<endl;
    knapsack(n,w,p,capacity);




}
