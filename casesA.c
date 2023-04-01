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
	/**
	 *Retrieve the integer argument from the argument list
	 */
	aux = malloc(sizeof(char) * 35);
	/**
	 *Allocate memory to store the integer converted to a string
	 */
	if (aux == NULL)
		/**
		 *Check if memory allocation was successful
		 */
		return (1);
	/**
	 *Return an error
	 */
	aux = _itoa(num, aux, 10);
	/**
	 *Convert the integer to a string
	 */
	s_len = _strlen(aux);
	/**
	 *Calculate the length of the string
	 */
	s = malloc((sizeof(char) * s_len) + 1);
	/**
	 *Allocate memory to store the string
	 */
	if (s == NULL)
		/**
		 *Check if memory allocation was successful
		 */
		return (1);
	/**
	 *Return an error
	 */
	_strcpy(s, aux);
	/**
	 *Copy the string to the allocated memory
	 */
	print_len = replace(buff, s, print_len);
	return (print_len);
	/**
	 *Replace the format specifier with the string in the buffer
	 */
	free(s);
	/**
	 *Free the allocated memory
	 */
	free(aux);
}
	/**
	 * perc_case - function for % case
	 * @ls: Unused
	 * @buff: buffer
	 * @print_len: Actual position of buff
	 * Return: Last position on buff
	*/
int perc_case(va_list __attribute__((unused)) ls, char *buff, int print_len)
{
	/**
	 * Allocate memory for a single character and a null terminator
	 */
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
/**
 *Get the integer argument from the variable arguments list
 */
	num = va_arg(ls, int);

/**
 *Allocate memory for a string representation of the binary number
 */
	aux = malloc(sizeof(char) * 35);

		/**
		 *Check if allocation was successful
		 */
	if (aux == NULL)
		return (1);
/**
 *Convert the integer to a binary string representation
 */
	aux = _itoa(num, aux, 2);
/**
*Get the length of the binary string
*/
	s_len = _strlen(aux);

/**
 *Allocate memory for the final string representation of the binary number
 */
	s = malloc((sizeof(char) * s_len) + 1);
/**
 *Check if allocation was successful
 */
	if (s == NULL)
		return (1);

/**
 *Copy the binary string to the final string representation
 */
	_strcpy(s, aux);

   /**
 *Replace the corresponding placeholder in the buffer with
 *the final string representation
 */
	print_len = replace(buff, s, print_len);

/**
 *Free the memory allocated for the string representations
 */
	free(s);
	free(aux);
	return (print_len);
}
