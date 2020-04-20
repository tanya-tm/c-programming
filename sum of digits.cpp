#include<stdio.h>
#include<conio.h>
int sum(int);

main()
{
	int n,s;
	printf("enter the number: ");
	scanf("%d",&n);
	s=sum(n);
	printf("the sum of digits of %d numbers is %d ",n,s);
	return 0;
}

int sum(int n)
{
    if(n==0)
	  return 0;
	else
	  return (n%10) + sum(n/10);
}
