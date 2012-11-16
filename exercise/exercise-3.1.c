#include <stdio.h>

int main(void)
{
	int i, result = 0;

	for (i = 1; i <= 10; i++)
	{
		result += i;
	}

	printf("result = %d\n", result);

	return 0;
}
