#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: the xter to print.
 * Description: _putchar uses a local buffer of 1024 to call write.
 * Return: Always 0.
 */

int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, i);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout.
 * @str: pointer to the string to print.
 * Return: Always 0.
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
