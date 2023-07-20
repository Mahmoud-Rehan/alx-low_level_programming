#include <stdio.h>

int fibonacci(int n);

int main(void)
{
	int n = 0;
	int sum = fibonacci(n);
	
	printf("%d, ", sum);
	return (0);
}

int fibonacci(int n)
{
	int i = 0;

	if (i <= 50)
	{
		n = n + fibonacci(n);
		i++;
	}
	else
	{
		return (n);
	}
	return (n);
}
