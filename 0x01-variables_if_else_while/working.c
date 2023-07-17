#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int m = 48;
	int n = 48;

	while (i <= 57)
	{
		while (j <= 57)
		{
			while (m <= 57)
			{
				while (n <= 57)
				{
					n += 1;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(m);
					putchar(n);
					if (i != 57 && j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				m += 1;
				n = m;
			}
			m = i;
			j += 1;
		}
		j = 48;
		i += 1;
	}
	putchar('\n');
	return (0);
}
