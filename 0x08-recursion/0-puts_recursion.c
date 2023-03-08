#include "main.h"
/**
 * _puts_recursion - funtion like puts();
 * @s: input
 * Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
