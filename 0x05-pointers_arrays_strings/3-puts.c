#include "main.h"


/**
 * _put - put a string 
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int i;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + 1));
	}
	_putchar('\n')
}
