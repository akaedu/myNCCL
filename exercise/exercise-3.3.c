#include <stdio.h>

int func(int n)
{
	int i = 1;
	int result = 1;

	do
	{
		result *= i;  /* result = result * i */
		i++;
	}while(i <= n);

	return result;
}

int main(void)
{
	int n;

	printf("please input n :\n");
	scanf("%d", &n);

	printf("result:%d\n", func(n));

	return 0;
}
