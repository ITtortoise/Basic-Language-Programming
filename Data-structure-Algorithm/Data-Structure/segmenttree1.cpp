#include<bits/stdc++.h>
#define mx 100001
using namespace std;

int arr[mx];
int tree[mx*3];
int n,i,j,k;
int SegTree(int node,int b,int e)
{
  if(b==e)
  {
      tree[node]=arr[b];
      return;
  }
  int mid=(b+e)/2;
  int left=(node*2);
  int right=(node*2)+1;
  SegTree(left,1,mid);
  SegTree(right,mid+1,e);
  tree[node]=tree[left]+tree[right];

}
int main()
{

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    SegTree(1,1,n);
    for(i=1;i<=n;i++)
        cout<<i<<' '<<tree[i]<<endl;
    return 0;
}
