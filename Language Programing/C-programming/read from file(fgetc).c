//fgetc() is uaed for reading data from file.//
#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int i;
	fp=fopen("no 2file.txt","r");
	ch=fgetc(fp);
	while(!feof(fp)){
	printf("%c",ch);
	ch=fgetc(fp);}
 	fclose(fp);
}