#include "main.h"
/**
 * main - entry point
 * Write a function that prints the alphabet, in lowercase
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
