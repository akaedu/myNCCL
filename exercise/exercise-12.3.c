#include <stdio.h>
#define N 10

int main(void)
{
	int num;
	int arr[N];
	int arr_count[N] = {0};
	int i;
	int tmp = 0;

	for(i = 0; i < N; i++)
	{
		arr[i] = i;
	}

	printf("Enter a numnber:");
	scanf("%d", &num);

	while(num)
	{
		tmp = num % 10;
		if(arr[tmp] == tmp)
			arr_count[tmp]++;
		num /= 10;
	}

	printf("Digit\t\t0 1 2 3 4 5 6 7 8 9\n");
	printf("Occurrences:\t");
	for(i = 0; i < N; i++)
	{
		printf("%d ", arr_count[i]);
	}

	printf("\n");

	return 0;
}
