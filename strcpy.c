#include "shell.h"

/**
 **_strchr - character in a string located
 *@s: parsed the string
 *@c: look for character
 *Return: a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		return (s);
	} while (*s++ != '\0');

	return (NULL);
}

/**
 **_strncat - two string concatenates
 *@dest: string one
 *@src: string two
 *@n: maximally used bytes
 *Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
/**
 **_strncpy - copies a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: characters to be copied
 *Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
	dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
	j = i;
	while (j < n)
	{
		dest[j] = '\0';
			j++;
		}
	}
	return (s);
}
