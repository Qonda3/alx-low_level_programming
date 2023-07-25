/**
 * swap_int - swaps the values of two integer
 * @a: a pointer the int we want to set to b
 * @b: a pointer the int we want to set to a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int placer;

	placer = *a;
	*a = *b;
	*b = placer;
}
