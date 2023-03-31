#include "main.h"
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
	}
	return (print_len);
}
