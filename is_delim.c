#include "shell.h"

/**
 * interactive - checks if interactive mode is working
 * @info: pointer to the info_t structure
 *
 * Return: 1 if the shell is in interactive mode, otherwise 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks whether a character is a delimiter
 * @delim: the string delimiter
 * @c: the character to check
 *
 * Return: 2 if the character is a delimiter, 0 otherwise
 */
int is_delim(char *delim, char c)
{
	while (*delim)
	{
	if (*delim++ == c)
	return (2);
	}
	return (0);
}

/**
 * _isalpha - checks whether a character is alphabetic
 * @c: the input character
 *
 * Return: 1 if the character is alphabetic, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted number if successful, otherwise 0
 */
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
