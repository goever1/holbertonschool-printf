#include "main.h"
/**
 * _itoa - conert int to an argument
 * @num: integer to convert
 * @s: pointer
 * @base: base to convert int
 * Returns: Pointer s
 */
char *_itoa(int num, char *s, unsigned int base)
{
	int i = 0, res, sign = 0;
	unsigned int aux;

	if (num == 0)
	{
		s[i] = '0';
		s[i + 1] = '\0';
		return (s);
	}
	if (num < 0 && base == 10)
	{
		sign = 1;
		aux = num * (-1);
	}
	else
		aux = num;
	while (aux > 0)
	{
		res = aux % base;
		if (res > 9)
			s[i] = (res - 10) + 'a';
		else
			s[i] = res + '0';
		aux = aux / base;
		i++;
	}
	if (sign == 1)
	{
		s[i] = '-';
		i++;
	}
	s[i] = '\0';
	rev_string(s);
	return (s);
}
/**
 * _utoa - converts an unsignerd integger to an argument
 * @num: integer to convert
 * @s: pointer
 * @base: base to convert
 * Return: pointer s
 */
char *_utoa(unsigned int num, char*s, unsigned int base)
{
	int i = 0;
	int res;

	if (num == 0)
	{
		s[i] = '0';
		s[i + 1] = '\0';
		return (s);
	}
	while (num > 0)
	{
		res = num % base;
		if (res > 9)
			s[i] = (res - 10) + 'a';
		else
			s[i] = res + '0';
		num = num / base;
		i++;
	}
	s[i] = '\0';
	rev_string(s);
	return (s);
}
