#include "main.h"
/**
 * _puts - printing a string, followed by a new line, to stdout
 * @str: print string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
