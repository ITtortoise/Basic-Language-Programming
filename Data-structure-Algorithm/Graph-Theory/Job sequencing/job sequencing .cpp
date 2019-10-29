#include<bits/stdc++.h>
int t[1000];
using namespace std;
int main()
{
    int i,j,p[100],d[100],n,temp;
    cout<<"enter total job:"<<endl;
    cin>>n;
    cout<<"enter profits:"<<endl;
    for(i=0;i<n;i++)
        cin>>p[i];
    cout<<"enter deadlines:"<<endl;
    for(j=0;j<n;j++)
        cin>>d[j];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]<p[j])
            {
                temp=p[j];
                p[j]=p[i];
                p[i]=temp;
                temp=d[j];
                d[j]=d[i];
                d[i]=temp;
            }
        }
    }

    sort(d,d+n);
    int m=d[n-1];
    //cout<<m;
    for(i=0;i<n;i++)
    {
        while(d[i]!=0)
        {
            if(t[d[i]]==0)
            {
                t[d[i]]=p[i];

                cout<<d[i]<<" "<<p[i]<<endl;
                break;
            }
            else
                d[i]--;
        }
    }
    int sum=0;
    for(i=0;i<=m;i++)
        sum=sum+t[i];
    cout<<sum;

}

