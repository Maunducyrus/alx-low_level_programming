#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src to the string pointed by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appendednto @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
