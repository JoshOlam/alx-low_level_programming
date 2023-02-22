#include "main.h"

/**
* main - Entry point
*
* Description: Prints Holberton, followed by a new line
* Return: 0
 */

int main(void)
{
	char [] = "Holberton";
	int msg;
	for (msg = 0; msg <= 8; msg++)
	{
		_putchar(holberton[msg]);
	}
	_putchar('\n');
	return (0);
}
