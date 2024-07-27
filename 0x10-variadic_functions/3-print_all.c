#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a char
 * @args: The arguments list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: The arguments list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: The arguments list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: The arguments list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything based on the format provided
 * @format: A list of types of arguments passed to the function
 *
 * Description: This function prints arguments based on the format
 * provided. The format can be:
 * 'c' for char
 * 'i' for integer
 * 'f' for float
 * 's' for string (if the string is NULL, it prints (nil))
 * Any other character is ignored.
 * A new line is printed at the end of the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j, printed = 0;
	const char t_args[] = "cifs";
	void (*funcs[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j])
			{
				if (printed)
					printf(", ");
				funcs[j](args);
				printed = 1;
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

