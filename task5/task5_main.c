﻿#include <stdio.h>

double f(double x);     

void main(void)
{
	double x = 2;
	double fres;
	fres = f(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", fres);
	printf("x = ");
	scanf_s("%lf", &x);
	fres = f(x);
	printf("f = %.4lf\n", fres);
}
