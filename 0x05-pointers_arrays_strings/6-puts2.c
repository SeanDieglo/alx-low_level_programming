#include "main.h"
#include <string.h>
/**
 * puts2 - prints a string followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i = 2)
		puts("%c\n", str[i]);
}
