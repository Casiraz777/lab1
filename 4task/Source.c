#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	int n, p, answer = 1;

	do
	{
		printf("n = "); scanf_s("%d", &n);
		if (n != 0)
		{
			if (n >= -34)
			{
				if (n <= 90)
				{
					answer *= n;
				}
			}
		}
	} while (n != 0);
	printf("p  = %d", answer);

	_getch();
	return 0;
}