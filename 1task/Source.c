#include <stdio.h>
#include <math.h>
#include <conio.h>



int main(void)
{
	double x, y, z, a, b, pi;

	printf("x = "); scanf_s("%lf", &x);
	printf("y = "); scanf_s("%lf", &y);
	printf("z = "); scanf_s("%lf", &z);
	pi = atan(1) * 4;

	if ((x + (pi / 2) < -1) || ((x + (pi / 2)) > 1))
	{
		printf("error\n");
	}

	else
	{
		a = ((2 * cos(x - (pi / 4))) / (1 / 2 + pow(sin(y), 2))) + acos(x + (pi / 2));
		printf("a = %lf\n", a);
	}

	if ((3 + pow(z, 2) / 5) == 0)
	{
		printf("0");

	}

	else
	{
		b = 1 + (pow(z, 2) / (3 + pow(z, 2) / 5));
		printf("b = %lf\n", b);

	}
	_getch();
	return 0;
}