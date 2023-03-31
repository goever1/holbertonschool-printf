#include "main.h"

/**
 * uns_case - function for unsigned integer
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int uns_case(va_list ap, char *buff, int print_len)
{
/**
 *The function uns_case takes in a variable argument list, a
 *character buffer, and the current position in the buffer.
 */
	char *s;
	char *aux;
	int s_len, num;
	
	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _utoa(num, aux, 10);
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
/**
 * oct_case - function for octal case
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */

int oct_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
/**
 *pointer to store the intermediate result of _utoa function
 */
	int s_len, num;

	num = va_arg(ap, int);
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);
	aux = _utoa(num, aux, 8);
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
/**
 * lhex_case - function for lowercase hex case
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */
int lhex_case(va_list ap, char *buff, int print_len)
{
	char *s;
char *aux;
int s_len, num;
/**
 *Declaring variables s and aux as character pointers, s_len as an integer,
	*and num as an integer to hold the value from the va_list.
*/
num = va_arg(ap, int);
/**
 *Assigning the integer value from the va_list to the variable num.
 */aux = malloc(sizeof(char) * 35);
if (aux == NULL)
	return (1);
/**
 *Allocating memory for aux with a size of 35 bytes and checking if the
 *allocation was successful. If not, the function returns 1.
 */
aux = _utoa(num, aux, 16);
/**
 *Converting the integer value in num to a string representing a lowercase
*hexadecimal number using the _utoa() function and storing it in aux.
*/
s_len = _strlen(aux);
/**
 *Assigning the length of the string stored in aux to the variable s_len.
 */
s = malloc((sizeof(char) * s_len) + 1);
if (s == NULL)
	return (1);
/**
 *Allocating memory for s with a size of s_len plus 1 byte for the null
 *terminator and checking if the allocation was successful. If not,
 *the function returns 1.
 */
_strcpy(s, aux);
/**
 *Copying the string stored in aux to the string stored in s.
 */
print_len = replace(buff, s, print_len);
/**
*Replacing the corresponding format specifier in the buffer buff with the string
*stored in s using the replace() function and storing the resulting string
*length in print_len.
*/
free(s);
free(aux);
/**
 *Freeing the allocated memory for s and aux.
 */
return (print_len);
}
/**
 * uhex_case - function that converts an integer to an uppercase
 * hexadecimal representation.
 * @ap: Unsigned
 * @buff: buffer
 * @print_len : actual position of buff
 * Return: Last position on buff
 */
int uhex_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len, num;

/**
 *get the unsigned int value from va_list
 */
	num = va_arg(ap, int);

/**
 *allocate memory for aux
 */
	aux = malloc(sizeof(char) * 35);
	if (aux == NULL)
		return (1);

/**
 *convert the unsigned int to hexadecimal
 */
	aux = _utoah(num, aux, 16);
/**
 *get the length of the hexadecimal string
 */
	s_len = _strlen(aux);

/**
 *allocate memory for s
 */
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);

/**
 *copy the hexadecimal string to s
 */
	_strcpy(s, aux);

/**
 *replace the format specifier in buff with s and update print_len
 */
	print_len = replace(buff, s, print_len);

/**
 *free the memory allocated for s and aux
 */
	free(s);
	free(aux);

/**
 *return the updated print_len
 */
	return (print_len);
}
/**
 * S_case - function for S case
 * @ap: String
 * @buff: buffer
 * @print_len: actual position of buff
 * Return: Last position on buff
 */
int S_case(va_list ap, char *buff, int print_len)
{
	char *s;
	char *aux;
	int s_len;
	int i, j;

/**
 *Extract the char* argument from va_list and check for null
 */
	aux = va_arg(ap, char*);
	if (aux == NULL)
		aux = "(null)";

/**
 *Calculate length of output string with room for hex codes
 */
	s_len = _strlen(aux);
	for (i = 0; aux[i] != '\0'; i++)
	{
		if (aux[i] < 32 || aux[i] >= 127)
			s_len += 3;
	}

/**
 *Allocate memory for output string
 */
	s = malloc((sizeof(char) * s_len) + 1);
	if (s == NULL)
		return (1);

/**
 *Copy input string to output string and replace
 *non-printable characters with hex codes
 */
	_strcpy(s, aux);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (aux[i] < 32 || aux[i] >= 127)
		{
			j = s[i];
			_strcpy(&(s[i + 3]), &(s[i]));
			s[i] = 92;
/**
 *ASCII 92: Backslash character
 */
			s[i + 1] = 'x';
			_itoa(j, &s[i + 2], 16);
			/**
			 *convert character to hex code
			 */
		}
	}
/**
 *Replace buffer with output string and free memory
 */
	print_len = replace(buff, s, print_len);
	free(s);
	return (print_len);
}
