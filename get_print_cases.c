#include "main.h"
int (*get_print_cases(char *arg))(va_list, char *, int)
{
	int i = 0;

	print_cases formats[] = {
		{"c", c_case},
		{"s", s_case},
		{"%", perc_case},
		{"d", dec_cases},
		{"i", dec_cases},
		{"b", bin_case},
		{"u", uns_case},
		{"o", oct_case},
		{"x", lhex_case},
		{"X", uhex_case},
		{"S", S_case},
		{"r", r_case},
		{"R", R_case}
	};
	for (;i < 13; ++i)
	{
		if (*arg == *(formats[i]).pfcase)
			return ((formats[i].convfun));
	}
	return (NULL);

}
