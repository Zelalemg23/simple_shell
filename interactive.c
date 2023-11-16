#include "shell.h"

/**
 * is_delim - check char is a delimeter or not
 * @c: checks character
 * @delim: the delimeter string
 * Return: return 1 if true, 0 if false
 */

int is_delim(char c, char *delim)
{
	while (*delim)
	if (*delim++ == c)
		return (1);
	else
		return (0);
}

/**
 * interactive - if shell is interactive mode return true
 * @info: struct address
 * Return: 1 if true, 0 if false
 */

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * _atoi - convert integer to string value
 * @s: string that is going tobe converted
 * Return - if true 1, or 0 if false
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
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
/**
 *_isalpha - checks for alphabetic char
 *@c: The char to input
 *Return: 1 if c is alphabetic, 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
