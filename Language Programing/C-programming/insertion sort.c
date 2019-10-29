#include<stdio.h>
int insertion_sort();
int main()
{
    int a[100]={5,2,8,4},A[100],i,j,n,num;
    //scanf("%d",&num);
    //for(i=0;i<num;i++)
        //scanf("%d",a[i]);
    insertion_sort(a,4);
    for(i=0; i<4; i++)
        printf("%d ",a[i]);
}
int insertion_sort(int A[],int n)
{
    int temp,j,i;
    for(i=1; i<n; i++)
    {
        temp=A[i];
        for(j=i-1; j>=0; j--)
            if(temp<A[j])
            {
                A[j+1]=A[j];
                A[j]=temp;
            }
    }
}
