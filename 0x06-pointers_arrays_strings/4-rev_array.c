/**
 * reverse_array - reverses the content of an array of integers.
 * @a: a pointer on a integer
 * @n: number of elements of the array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int sub;
	int k;

	for (k = 0; k < n; k++)
	{
		n--;
		sub = a[k];
		a[k] = a[n];
		a[n] = sub;
	}
}
