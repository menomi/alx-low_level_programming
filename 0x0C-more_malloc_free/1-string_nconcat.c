#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: first string to copy
  * @s2: second string to copy
  * @n: number of bytes of s2 to copy
  *
  * Return: pointer to new char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, k, l;
	char *str;

	if (s1 == NULL)
		j = 0;
	else
	{
		for (j = 0; s1[j]; j++)
			;
	}
	if (s2 == NULL)
		k = 0;
	else
	{
		for (k = 0; s2[k]; k++)
			;
	}
	if (k > n)
		k = n;
	str = malloc(sizeof(char) * (j + k + 1));
	if (str == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
		str[l] = s1[l];
	for (l = 0; l < k; l++)
		str[l + j] = s2[l];
	str[j + k] = '\0';
	return (str);
}
