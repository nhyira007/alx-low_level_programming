#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * return - o
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
