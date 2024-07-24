/**
 * print_name - Prints a name using a given function
 * @name: The name to print
 * @f: Pointer to the function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

