#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b,c;
	fp=fopen("no1file.txt","r");
	fscanf(fp,"%d%d",&a,&b);
	printf("%d %d",a,b);
	fclose(fp);
}