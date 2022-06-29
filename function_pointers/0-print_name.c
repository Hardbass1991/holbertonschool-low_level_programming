/**
 * print_name - calls input functions
 * @name: input argument to call the function
 * @f: pointer to the function that will be called
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
