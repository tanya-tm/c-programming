#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	FILE *fp;
	fp=fopen("C:/Users/rdx/Dev-Cpp/mycap.txt","r");
	char ch;
	int n;
	if(fp==NULL)
	{
		printf("file could not open !!");
		exit(0);
	}
	fseek(fp,10,SEEK_END);
	n= ftell(fp);
	int i=0;
	while(i<n)
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
