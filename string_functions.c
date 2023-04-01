#include "main.h"
/**
 * _strlen - returns the length of the string
 * @s: Pointer to string to measure
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	for(; s[i] != '\0'; ++i)
		len =+ 1;
	return (len);
}
/**
 * _strcpy - copies the string pointed to by src
 * @dest: Pointer to destiny
 * @src: Pointer to source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i = 0;

	len = _strlen(src);
	for (; i <= len; ++i)
		*(dest + i) = *(src + i);
	return (dest);
}
/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	i = _strlen(s) - 1;
	j = 0;
	for (; i >=j; ++j)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		i = i - 1;
	}
}
