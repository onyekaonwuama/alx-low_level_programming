#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * *string_nconcat - return function concatenates two strings
 *
 *@s1: char pointer
 *@s2: char pointer
 *@n: unsigned int
 *
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1, str2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0';  str2++)
		;
	if (n <= str2)
		n = str2;
	ptr = malloc(sizeof(char) * (str1 + n + 1));

	if (ptr != NULL)
	{
		for (i = 0; i < str1; i++)
		{
			ptr[i] = str1[i];
		}
		for (j = 0; j < n; j++)
			ptr[str1 + j] = str2[j]
		ptr[str1 + j] = '\0';
	}
	free(ptr);
	return (NULL);
}

