#include "calc.h"
int main (int argc, char argv)
{
	int a = 0;
	int b = 0;
	int r = 0;
	int (*func)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = *get_op_func(argv[2]);
	return (func(a, b));
}
