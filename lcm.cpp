#include<stdio.h>
#include<conio.h>
int lcm(int,int);

main()
{
	int a,b,result;
	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);
	result = lcm(a,b);
	printf("the LCM is %d",result);\
	getch();
}

int lcm(int a,int b)
{
	static int common=1;
	if(common%a==0&&common%b==0)
	{
		return common;
	}
	common++;
	lcm(a,b);
	return common;
}
