#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Description: Print all possible combinations of two two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * Combination of numbers must be separated by a comma followed by a space.
 * Combinations of numbers should be printed in ascending order.
 * `00 01` and `01 00` are considered as the same combination.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 8 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e;
int f = 0;
	int i, j;
	int a, b, c, d;

while (f < 10)
{
	e = 0;
	while (e < 10)
	for (i = 0; i < 100; i++)
	{
		d = 0;
		while (d < 10)
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */

		for (j = 0; j < 100; j++)
		{
			c = 0;
			while (c < 10)
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */

			if (a < c || (a == c && b < d))
			{
				if (!(f == c && e == d))
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar('0' + f);
					putchar('0' + e);
					putchar(' ');
					putchar('0' + d);
					putchar('0' + c);
					if (!(f + e == 18 && c + d == 17 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(44);
					putchar(32);
				}
				c++;
			}
			d++;
		}
		e++;
	}
	f++;
}
putchar('\n');
return (0);
	putchar(10);

	return (0);
}
