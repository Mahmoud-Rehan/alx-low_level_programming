#include "main.h"

int _atoi(char *s)
{
	unsigned int counter = 0;
	unsigned int size = 0;
	unsigned int n = 0;
	unsigned int r = 1;
	unsigned int m = 1;
	unsigned int i;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
		{
			break;
		}

		if (*(s + counter) == '-')
		{
			r = r * -1;
		}

		if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
			{
				m = m * 10;
			}
			size++;
		}
		counter++;
	}

	for (i = counter - size; i < counter; i++)
	{
		n = n + (*(s + counter) - 48) * m;
		m = m / 10;
	}

	return (n * r);
}
