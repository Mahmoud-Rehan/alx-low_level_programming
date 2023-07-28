#include "main.h"

char *rot13(char *s)
{
	int i = 0;
	int j;

	char array1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char array2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == array1[j])
			{
				s[i] = array2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
