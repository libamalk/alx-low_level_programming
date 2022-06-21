#include "main.h"

/** 
* _memcpy -copy n byte files from src to dest
* @dest destination of copied file
* @src source file 
* 
* Returns: the filled memory area.
*/
char *_memcpy(char *dest, char *src, unsigned int n) 
{

unsigned int a;

for (int a = 0; a < n; i++)
{
	dest[a] = src[a];
}

return (dest);

}

