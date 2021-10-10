#include <math.h>

double x = 2;
double result;

void f(void)
{
	result = ((sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2));
}