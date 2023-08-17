#include <stddef.h>
/**
 * print_name - print a name
 * @name: pointer to char
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
