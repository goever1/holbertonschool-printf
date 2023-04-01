#include "main.h"
#include <stdarg.h>
/**
 * c_case - function for c case
 * @ls: Character
 * @buff: buffer
 * @print_len: Actual position of buff
 * Return: Last position on buff
 */

int c_case(va_list ls, char *buff, int print_len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
		return (print_len);
	c[0] = va_arg(ls, int);
	if (c[0] == 0)
		print_len += 1;
	c[1] = '\0';
	print_len = replace(buff, c, print_len);
	free(c);
	return (print_len);
}

/**
 * s_case - function for s case
 * @ls: String
 * @buff: buffer
 * @print_len: actual position of buff
 * Return: Last position on buff
 */

int s_case(va_list ls, char *buff, int print_len)
{
	char *str = va_arg(ls, char*);
	
	if (!str)
		str = "(null)";
	return (replace(buff, str, print_len));
}

/**
 * dec_case - function for d case
 * @ls: Decimal
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int dec_case(va_list ls, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ls, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _itoa(num, aux, 10);
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	return (print_len);
	free(s);
	free(aux);
}
/**
 *  perc_case - function for % case
 *  @ls: Unused
 *  @buff: buffer
 *  @print_len: Actual position of buff
 *  Return: Last position on buff
 */
int perc_case(va_list __attribute__((unused)) ls, char *buff, int print_len)
{
	char *c;

	c = malloc((sizeof(char) + 1));
	if (c == NULL)
		return (1);
	c[0] = '%';
	c[1] = '\0';
	print_len = replace(buff, c, print_len);
	free(c);
	return (print_len);
}
/**
 * bin_case - function for binary case
 * @ls: integer to convert into binary
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */
int bin_case(va_list ls, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

	num = va_arg(ls, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _itoa(num, aux, 2);
	s_len = _strlen(aux);
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	print_len = replace(buff, s, print_len);
	free(s);
	free(aux);
	return (print_len);
}
