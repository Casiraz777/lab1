#include <math.h>
#include <stdio.h>
#include <clocale>


int main(void)

{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if ((i + j + pow((i + j),2)) == (i * 10 + j))
			{
				int a = i * 10 + j;
				printf("%d\n", a);
			}
			else
			{
				continue;
			}
		}
	}
}