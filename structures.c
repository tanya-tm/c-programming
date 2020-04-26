#include<stdio.h>
#include<conio.h>

struct emp
{
	char ename[20];
	char dept[20];
	float sal;
};

main()
{
	struct emp x[20];
	int i;
	for(i=0;i<20;i++)
	{
		printf("enter employee name, department, salary : ");
		scanf("%s %s %f",x[i].ename,x[i].dept,&x[i].sal);
	}
	printf("\n employee details:  \n");
	for(i=0;i<20;i++)
	{
		printf("\n %s \t %s \t %f \n ",x[i].ename,x[i].dept,x[i].sal);
	}
	return 0;
}
