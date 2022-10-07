#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - returns a function that concats two strs
 *
 *@s1:str1
 *@s2:str2
 *@n:length of str two
 *Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, slen1, slen2, length, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	slen1 = 0;
	for (i = 0; *(s1 + i) != '\0'; i++)
		slen1++;
	slen2 = 0;
	for (i = 0; *(s2 + i) != '\0'; i++)
		slen2++;
	if (n >= slen2)
	{
		n = slen2;
	}
	length = slen1 + n;
	ptr = malloc((sizeof(char) * length) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < slen1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; i < length; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
