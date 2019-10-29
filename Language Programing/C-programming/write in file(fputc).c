//fputc() is used for writing data in file//
#include<stdio.h>
int main()
{
	FILE *fp;
	char s[100];
	int i;
	fp=fopen("no 2file.txt","w");
	printf("enter a text to save in file");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	fclose(fp);
}
	