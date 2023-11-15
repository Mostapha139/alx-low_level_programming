#include "main.h"
#include "string.h"

/**
 * wildcmp - compares two strings and returns 1 if they are identical,
 * otherwise return 0. The second string can contain the special character *
 * which can replace any string (including an empty string).
 * @s1: first string to be compared
 * @s2: second string to be compared (may contain *)
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
