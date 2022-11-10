#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: pointer value
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
