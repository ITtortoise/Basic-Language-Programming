 #include<stdio.h>
int main()
{
	FILE *fp;
	int a,b;
	fp=fopen("no1file.txt","w");
	scanf("%d%d",&a,&b);
	fprintf(fp,"%d %d",a,b);
	fclose(fp);
}
