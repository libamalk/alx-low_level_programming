#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Everything worked
 */


int main(void)
{
	printf("%s\n", _BASE_FILE_);
	return (0);
}
