#include<stdio.h>
int main()
{
  int y[10]={1};
  int *a = fillarr(y);
  cout << a[0] << endl;
}

int* fillarr(int arr[])
