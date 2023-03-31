# holbertonschool-printf

NAME
The _printf program is a recreation of the C standard library function, printf, command to format and print data.
SYNOPSIS
The following paragraph describes how to run _printf and what command line options it takes.
To use the _printf function, assuming the above .c dependencies have been installed, compile all .c files in the repository and include the header main.hin the entry point function.
#include "main.h"

int main()
{
    _printf("Hi friend,from C20!");

    return (0);
    }

The previous code can be stored in a .c file called “main”.

To compile the code, execute
$ gcc *.c -o [File_name]

Output:
$ ./[File_Name]
Hi friend,from C20!
$

Description
This code defines functions that handle different format specifiers used in printf-style formatting in C.

perc_case handles the % character specifier.
Syntaxis
Prototype:
int _printf(const char *format, ...);
The function _printf writes output to standard output.
The function writes under the control of a format string that specifies how consecutive arguments (accessed via the variable-length facilities of stdarg) are converted for output.
Return Value
If successful return, _printf returns the number of characters printed excluding the terminating null byte used to end output to strings.
But If an output error is encountered, the function returns -1 and it does not print anything.
Format of the Argument String
The format string is a constant character string composed of ordinary characters which are copied unchanged to the output stream.
Specification cases are introduced by the character % and ends with a conversion specifier.
Conversion Specifiers
The conversion specifier introduced by the character % is a character that specifies the type of conversion to be applied.

The _printf function supports the following conversion specifiers:
d, i
The d and i argument is converted to char for decimal and integer notation.

Example main.c:
int main()
{
    _printf("%d\n", 9);
    }
    Output:
    9
    o, u, x, X
    The unsigned int argument is converted to: unsigned octal (o), unsigned decimal (u), unsigned hexadecimal (x) and unsigned hexadecimal Uppercase(X).
    The letters abcdef are used for x conversions and the letters ABCDEF are used for X conversions.
    Then for each case, modded utoa pseudo functions were used

Example main.c:
int main()
{
    _printf("%o\n", 77);
    }
    Output:
    115
    c
    The int argument is converted to a char.
    Example main.c:
    int main()
    {
        _printf("%c\n", 48);
	}
	Output:
	0
	s
	Arguments are printed as a string.
	Example main.c:
	int main()
	{
	    _printf("%s\n", "Hello, World!");
	    }
	    Output:
	    Hello, World!

S
Arguments are printed as a string, even if there are non-printable ASCII characters. In the following example, the code is executed with ‘%s’ and ‘%S’ to make the difference of flags visible.
Example main.c:
int main() {
    char my_string[] = "Hello, \tWorld!\n";
        _printf("Original string: %s\n", my_string);
	    _printf("Formatted string: %S\n", my_string);
	        return 0;
		}
		Output:
		Original string: Hello,		World!
		Formatted string: Hello, \x09World!\x0a


%
A % is written. No argument is converted. The complete conversion specification is %%.
Example:
int main(void)
{
    _printf("%%\n");
    }
    Output:
    %
    Reverse String
    String arguments are printed in reverse.
    Example:
    int main(void)
    {
	_printf("%r\n", "Hello");
	}
	Output:
	olleH
	ROT13
	String arguments are coded in ROT13
	Example:
	int main(void)
	{
		_printf("%R\n", "Hello");
		}
		Output:
		Uryyb

b
The int argument is converted to a binary.

Example:
int main() {
    int num = 42;
        char buff[100];
	    int print_len = 0;
	    /**
	    * pass the address of num, buff, and print_len to the bin_case function, *which converts the integer to a binary string using the _itoa function and *stores it in buff. The function returns the length of the binary string.
	    */
	        print_len += bin_case(&num, buff, print_len);
		/**
		/**
		* print the binary representation of num using printf, where the %s format *specifier is used to print the binary string.
		    printf("Binary representation of %d is %s\n", num, buff);

    return 0;
    }






SEE ALSO
Printf(3)
BUGS
No known bugs.
AUTHOR
-	Andrés Ariza <Andres-f-ariza>
-	Jorge Ochoa <goever1>
