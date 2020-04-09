#include<stdio.h>
#include<conio.h>
main()
{
	int x=10,y=5;
	x=x+y; //x becomes 15 
	y=x-y; //y becomes 10
	x=x-y; //x becomes 5 
	printf("after swapping: \n x = %d \n y = %d",x,y);
}
