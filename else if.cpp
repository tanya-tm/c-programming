#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("byte! enter the student number:");
	scanf("%d",&n);
	if(n>=85&&n<=100)
	{
		printf("GRADE A \n");
	}
	else if(n>=70&&n<=84)
	{
		printf("GRADE B \n");
	}
	else if(n>=55&&n<=69)
	{
		printf("GRADE C \n");
	}
	else if(n>=40&&n<=54)
	{
		printf("GRADE D \n");
	}
	else
	{
		printf("GRADE F \n");
	}
}
