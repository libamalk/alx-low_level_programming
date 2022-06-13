#include <stdio.h>

/**
 * _strlen - check the code
 * @s: is a pointer int char type
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int count=0;
	while(*s != '\0'){
		count=count+1;
	}
	return (count);
}
