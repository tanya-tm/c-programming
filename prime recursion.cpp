#include<stdio.h>
#include<conio.h>
int prime(int,int);

main()
{
	int n,p;
	printf("enter the number: ");
	scanf("%d",&n);
	p=prime(n,n/2);
	if(p==1)
      printf("prime number!!");
    else
      printf("not a prime number!!");
    return 0;
}

int prime(int n, int i)
{
	if(i==0)
	  return 0;
	if(n%i==1)
	  return 1;
	else 
	  return prime(n,i-1);
}
