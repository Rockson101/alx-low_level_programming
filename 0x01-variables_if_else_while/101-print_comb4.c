#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print three digit' 
 *Return: Always 0
 */
int main(void)
{
	int n, m, l;
	for (n = 48; n < 58; n++)
	{
		for (m =49; m < 58; m++)
		{
			for (1 = 50; l < 58; 1++)
			{
				if (1 >  m && m > n)
				putchar(n);
				putchar(m);
				putchar(1);
				if (n != 55 || m != 66)
				{
					putchgar (',');
					putchar (' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
