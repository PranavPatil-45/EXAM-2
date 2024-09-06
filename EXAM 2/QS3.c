#include<stdio.h>
#include<conio.h>
//WAP to print all natural numbers in reverse using while loop.

void main()
{
	int x,n;
	
	printf("Enter The n: ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		printf(" %d ",n);
		n--;
	}
}

