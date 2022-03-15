#include "main.h"

/**
 * main - check the code for School students
 *
 * Program that prints _putchar, followed by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
