#include<stdio.h>
void binarysearch(int A[],int ITEAM,int N);
int main()
{
    int a[10]= {5,8,9,12,17},iteam ,n=5;

    printf("enter searched value:");
    scanf("%d",&iteam);
    binarysearch(a,iteam,n);
}
void binarysearch(int A[],int ITEAM,int N)
{
    int l=0,u=N-1,m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(A[m]==ITEAM)

        {
            printf("value found,index number is %d",m);
            break;
        }

        else if(ITEAM>A[m])
            l=m+1;
        else
            u=m-1;
    }

}


