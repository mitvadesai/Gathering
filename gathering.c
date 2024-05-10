#include<stdio.h>

int add(int x,int y)
{
	return x+y;
}
int sub(int c,int d)
{
	return c-d;
}
int mul(int i,int j)
{
	return i*j;
}
int div(int m,int n)
{
	return m/n;
}
int mod(int s,int t)
{
	return s%t;
}
void main()
{
	int a,b;
	int choice;
	printf("enter value of A:");
	scanf("%d",&a);
	
	printf("enter value of B:");
	scanf("%d",&b);
	
	printf("\npress 1 for addition(+)\n");
	printf("press 2 for subtraction(-)\n");
	printf("press 3 for multiplication(*)\n");
	printf("press 4 for division(/)\n");
	printf("press 5 for modulo(%)\n");
	printf("press 0 for EXIT");	
	
	do
	{
		printf("\nenter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("addition of %d and %d is: %d\n",a,b,add(a,b));
				break;
				
			case 2:
				printf("subtraction of %d and %d is: %d\n",a,b,sub(a,b));
				break;
				
			case 3:
				printf("multiplication of %d and %d is: %d\n",a,b,mul(a,b));
				break;
				
			case 4:	
				printf("division of %d and %d is: %d\n",a,b,div(a,b));
				break;
				
			case 5:
				printf("modulo of %d and %d is: %d\n",a,b,mod(a,b));
				break;
				
			case 0:
				printf("EXIT\n");
				break;
				
			default:
				printf("Press the number from 0 to 5...");
				break;			
		}
	}
	while(choice!=0);
}