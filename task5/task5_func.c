#include <math.h>

double f(double x)
{
	return ((sqrt(2 * x + 2 * sqrt(pow(x, 2) - 4))) / (sqrt(pow(x, 2) - 4) + x + 2));
}