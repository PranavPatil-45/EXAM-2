#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0;
	
	printf("Enter The Number: ");
	scanf("%d",&n);
	
	for(sum=0; n>0; sum+=1 )
	{
		
		n=n/10;
		
	}
	printf("Sum of digits is %d ",sum);
}