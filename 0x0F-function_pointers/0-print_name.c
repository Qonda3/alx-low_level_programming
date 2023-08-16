/**
 * print_name - print a name
 * @name: pointer to char
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
