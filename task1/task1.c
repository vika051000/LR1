#include <stdio.h>
#include<math.h>

void main(void)
{
	double x = 2;					
	double f;						
	f = ((sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2));
	printf("x = %.4lf\n", x);		    
	printf("f = %.4lf\n", f);		
	printf("x = ");					 
	scanf_s("%lf", &x);				
	f = ((sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2));
	printf("f = %.4lf\n", f);					
}

