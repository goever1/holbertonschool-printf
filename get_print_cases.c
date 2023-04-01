#include "main.h"
int (*get_print_cases(char *arg))(va_list, char *, int)
{
	int i = 0;

	print_cases formats[] = {
		{"c", c_case},
		{"s", s_case},
		{"%", perc_case},
		{"d", dec_case},
		{"i", dec_case},
	};
	for (;i < 5; ++i)
	{
		if (*arg == *(formats[i]).pfcase)
			return ((formats[i].convfun));
	}
	return (NULL);

}
