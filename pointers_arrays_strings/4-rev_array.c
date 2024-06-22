void reverse_array(int *a, int n)
{
	int counter;
	int x;
	int y = n - 1;

	for (counter = 0; counter <= (n - 1) / 2; counter++)
	{
		x = a[counter];
		a[counter] = a[y];
		a[y] = x;
		y--;
	}
}
