#include<stdio.h>
int bubble_sort();
int main()
{
    int a[5],num;
    int n,i;
    scanf("%d",&num);
     for(i=0;i<num;i++)
        scanf("%d",&a[i]);
        bubble_sort(a,4);
        for(i=0;i<num;i++)
            printf("%d ",a[i]);
}
int bubble_sort(int A[],int n)
{
    int round,temp,i;
    for(round=1; round<=n-1; round++)
    {
        for(i=0; i<=n-1-round; i++)
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
    }
}

