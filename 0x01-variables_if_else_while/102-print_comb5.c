#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point 
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 57; k++)
			{
	                if (((k + j) > (c + i) && k >= c) || c < k)
			{
				putchar(c);
				putchar(i);
				putchar(' ');
				putchar(k);
				putchar(j);

				if (c + i + k + j == 227 && c ==57)
				{
				break;
				}
				else
				{
				putchar(',');
				putchar(' ')'
						}
						}
						}
						}
						}
	purchar('\n');
	return (0);
}
