#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print alphabet in reverse'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
		putchar('\n');
		return (0);
}
