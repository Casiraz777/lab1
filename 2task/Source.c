#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	float a, b, c, x, x1, x2, d;
	printf("a = "); scanf_s("%f", &a);
	printf("b = "); scanf_s("%f", &b);
	printf("c = "); scanf_s("%f", &c);
	if (a == 0)
	{
		printf("a==0");
	}
	else
	{
		d = pow(b, 2) - (4 * a * c);
		if (d < 0)
		{
			printf("x not found");
		}
		else if (d == 0)
		{
			x = (-b) / (2 * a);
			printf("x = %f", x);
		}
		else
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			printf("x1 = %f\nx2 = %f\n", x1, x2);
		}
	}
	_getch();
	return 0;
}

