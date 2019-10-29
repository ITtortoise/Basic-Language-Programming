#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

int Partition(int a[],int start,int end)
{
    int pivot=a[end];
    int pIndex=start;
    for(int i=start;i<end;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[end],a[pIndex]);
    return pIndex;
}


void QuickSort(int a[],int start,int end)
{
    if(start<end){
        int pIndex=Partition(a,start,end);
        QuickSort(a,start,pIndex-1);
        QuickSort(a,pIndex+1,end);
    }
}

int main()
{
    int n,i,j,x[100];
    pf("Enter The Number Of Elements : ");
    sf("%d",&n);
    pf("Enter The Elements : ");
    for(i=0;i<n;i++)
        sf("%d",&x[i]);
    QuickSort(x,0,n-1);
    pf("After Sorting : ");
    for(i=0;i<n;i++)
        pf("%d ",x[i]);

    return 0;
}
