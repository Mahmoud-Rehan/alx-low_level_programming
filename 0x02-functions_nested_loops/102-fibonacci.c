#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = fibonacci(n);
	
	printf("%d, ", sum);
}

void fibonacci(int n)
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
}
