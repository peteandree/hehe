#include <stdio.h>

int main()
{
	const float I=0.1;
	int amt;
	int yrs;
	float total;
	
	printf("Input Amount:");
	scanf("%d",&amt);
	printf("Input Years:");
	scanf("%d",&yrs);
	
	total=amt*I*yrs+amt;

	
	printf("\nThe Total Is:%f",total);
	
	return 0;
}
