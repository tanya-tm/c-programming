#include<stdio.h>
#include<conio.h>

main()
{
	int a[3][3];
	int i,j;
	int s=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the elements: ");
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
		       s=s+ *(*(a+i)+j);
		}
	}
	printf("the sum is %d ",s);
}
