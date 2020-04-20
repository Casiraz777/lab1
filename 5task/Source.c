#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, i;
	float a = 0, b = 0, c = 0;
	printf("Enter number > or = 1 \n n = "); scanf_s("%d", &n);
	for (i = 1 ; i <= n; i++)
		{
			a = a + cos(i);
			b = b + sin(i);
			c = c + a / b;
		}
	printf("%f", c);
}