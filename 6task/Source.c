#include <stdio.h>
#include <math.h>
float function(int i)
{
	float x, f, s = 1.0;
	int z;
	for (z = 1; z < i; z++)
	{
		s *= z;
	}
	x = pow(-2, i);
	f = x / s;
	return f;
}
int main(void)
{
	int i = 1;
	float y = 0;
	float eps;

	printf("e = "); scanf_s("%f", &eps);

	y = function(i);

	while (fabs(y) >= eps)
	{
		y += function(i);
		i++;
	}

	printf("sum = %f", y);
	return 0;
}