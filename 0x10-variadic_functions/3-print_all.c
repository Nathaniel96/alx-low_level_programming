#include "variadic_functions.h"
/**
 *  print_all - function that prints anything.
 *  @format: types of arguments passed to the function
 *  Return: any argument based on given format.
 */
void print_all(const char * const format, ...)
{
	int i, check;
	char *str;
	va_list arg_pass;

	va_start(arg_pass, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_pass, int));
				check = 0;
				break;
			case 'i':
				printf("%d", va_arg(arg_pass, int));
				check = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg_pass, double));
				check = 0;
				break;
			case 's':
				str = va_arg(arg_pass, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check = 0;
				break;
			default:
				check = 1;
				break;
		}
		if (format[i + 1] != '\0' && check == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg_pass);
}
