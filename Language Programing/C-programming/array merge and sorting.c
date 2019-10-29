#include<stdio.h>
int main()
{
    int arr1[5]= {3,8,11,22,15};
    int arr2[5]= {5,9,12,18,13},arr3[10],i,j,k=0,temp;
    //printf("After mage:");
    for(i=0; i<10; i++)
    {
        if(i<5)
            arr3[i]=arr1[i];
        else
        {
            arr3[i]=arr2[k];
            k++;
        }

    }
    /*for(i=0;i<10;i++)
      printf("%d ",arr3[i]);
      printf("\n\n");*/
    printf("After sorting:");
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[j];
                arr3[j]=arr3[i];
                arr3[i]=temp;
            }


        }
        printf("%d ",arr3[i]);
    }
}
