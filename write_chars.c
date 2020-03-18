#include "holberton.h"
/**
 * write_chars - Function to print the char c
 * @c: The character to print
 * Return: -1 to Return error and 1 to return exit.
 */
int write_chars(char c)
{
	return (write(1, &c, 1));
}
