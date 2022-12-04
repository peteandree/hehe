#include <stdio.h>
int main()
{
	int num1;
	int num2;
	int i;
	
	num1 = 0;
	num2 = 0;
	i = 0;
	
	printf("Enter first number:");
	scanf("%d", &num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	
	while(num1>=num2)
	{
		num1=num1-num2;
		i++;
	}
	
	printf("Sum: %d",i);
	printf("\nRemainder: %d",num1);
	
	return 0;
}
