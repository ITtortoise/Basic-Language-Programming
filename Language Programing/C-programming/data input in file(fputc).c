//fputc() is used for insrt data in file//
#include<stdio.h>
int main()
{
	FILE *fp;
	int i,n;
	char s1[10]="love";
	fp=fopen("no1file.txt","w");
	if(fp==NULL)
	{printf("file is not open");
	exit(1);}
	for(i=0;i<strlen(s1);i++)
	fputc(s1[i],fp);
	fclose(fp);
}