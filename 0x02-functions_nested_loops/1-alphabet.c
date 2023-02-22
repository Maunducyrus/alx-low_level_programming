#include "main.h"
/**
 * print alphabet - writes the character void to stdout
 *
 * Return: on success 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
