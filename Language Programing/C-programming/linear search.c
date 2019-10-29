#include<stdio.h>
void seq_search(int A[],int ITEAM,int N);
int main()
{
    int a[100]= {10,15,17,20,30};
    int iteam,n=5;
    scanf("%d",&iteam);
    seq_search(a,iteam,n);
}
void seq_search(int A[],int ITEAM,int N)
{
    int i,flag=1;
    for(i=0; i<N; i++)
    {
        if(A[i]==ITEAM)
        {
            flag=0;
            printf("value found");
        }
    }
    if(flag==1)
        printf("value not found");


}


