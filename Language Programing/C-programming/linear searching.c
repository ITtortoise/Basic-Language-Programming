#include<stdio.h>
void linearsearch(int A[],int ITEAM,int N);
int main()
{
	int a[20],iteam,n,i;
	printf("enter elements number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	printf("enter searched value:");
	scanf("%d",&iteam);
	linearsearch(a,iteam,n);
}
void linearsearch(int A[],int ITEAM,int N)
     {     int i,flag=0;
     for(i=0;i<N;i++)
           {  if(A[i]==ITEAM)
                 flag++;}
             if(flag==1)
             printf("value found");
             else
             printf("value not found");
      
     }