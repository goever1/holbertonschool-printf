#include "main.h"
/**
 * r-case - r case function
 * @ap: string
 * @buff: buffer
 * @print_len: position of buff
 * Return: Last position on buf
 */
int r_case(va_list ls, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len;
	
	aux = va_arg(ls, char*);
	if (aux == NULL)
		aux = "(null)";
	s_len = _strlen(aux);
	s = malloc ((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	rev_string(s);
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}
/**
 * R_case - R case function
 * @ap: string
 * @buff: buffer
 * @print_len: position fo buff
 * Return: last position on buff
 */
int R_case(va_list ls, char *buff, int print_len)                                                                                                                                               
{
	char *s;
	char *aux;
	int s_len;
	
	aux = va_arg(ls, char*);
	if (aux == NULL)
		aux = "(null)";
	s_len = _strlen(aux);
	s = malloc ((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);
	_strcpy(s, aux);
	rev_string(s);
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}
