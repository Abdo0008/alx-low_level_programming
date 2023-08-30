#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * _puts_recursion - check the code
 * @s: pointer.
 * Return: void.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _puts_recursion(char *s)
{
    int i;

	i = 0;
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
