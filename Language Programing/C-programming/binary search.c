#include<stdio.h>
void seq_search(int A[],int ITEAM,int N);
int main()
{
    int a[100]= {10,17,24,30,42};
    int iteam,n=5,i;
    scanf("%d",&iteam);
    seq_search(a,iteam,n);
}
void seq_search(int A[],int ITEAM,int N)
{
    int l=0,u=N-1,m,flag=1;
    {
        while(l<=u)
        {
            m=(l+u)/2;
            if(ITEAM==A[m])
            {   flag=0;
                printf("value found");
                break;
            }
            else if(ITEAM>A[m])
                l=m+1;
            else if(ITEAM<A[m])
                u=m-1;}

        if(flag==1)
        printf("value not found");
    }

}



