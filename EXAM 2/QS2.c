#include<stdio.h>
#include<conio.h>
//WAP to find  lowest value from 3 number using nested if else.
void main()
{
	int a,b,c;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("a is lowest");
		}
		else
		{
			printf("c is lowest");
		}
		
	}
	else
	{
		printf("b is lowest");
	}
}