#include "main.h"
<<<<<<< HEAD
/**
 * replace - puts s string in pointer buffer
 * @buffer: buffer
 * @s: String
 * @print_len: Final position
 * Return: Final position
 */
int replace(char *buffer, char *s, int print_len)
{
	int i = 0;
	
	for (; s[i] != '\0'; ++i)
	{
		buffer[i] = s[i];
		print_len += 1;
=======

/**
 * replace - puts s string on pointer buffer
 * @buffer: Destination buffer
 * @s: String to put
 * @print_len: Final position
 * Return: Final position
 */

int replace(char *buffer, char *s, int print_len)
{
	int i = 0;

	while (s && s[i])
	{
		buffer[i] = s[i];
		print_len += 1;
		i++;
>>>>>>> eee440b3a68610615a835d782f65e7a458cc0e17
	}
	return (print_len);
}
