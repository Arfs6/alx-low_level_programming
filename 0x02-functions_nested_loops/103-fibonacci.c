#include <stdio.h>
/**
 * main - initializing
 *
	* Return: 0
*/
int main(void)
{
	int i = 2;
	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (i < 98)
	{
		i++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
