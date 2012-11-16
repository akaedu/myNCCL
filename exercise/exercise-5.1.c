#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void init(int num[], int len)
{
	int i;

	srand(time(NULL));
	for(i = 0; i < len; i++)
		num[i] = rand() % 50;
}

void sort(int num[], int len)
{
	int i, j, tmp, pos;

	for(i = 0; i < len - 1; i++){
		pos = i; 
		for(j = i + 1; j < len; j++)
			if(num[pos] > num[j])
				pos = j;

		if(pos != i){
			tmp = num[pos];
			num[pos] = num[i];
			num[i] = tmp;
		}
	}
}

void show(int num[], int len)
{
	int i;

	printf("show...\n");
	for(i = 0; i < len; i++)
		printf("%d ", num[i]);
	printf("\n");
}

int main(void)
{
	int num[N + 1], n, i;

	init(num, N);
	sort(num, N);
	show(num, N);

	printf("Enter n:");
	scanf("%d", &n);
	
	for(i = N - 1; num[i] > n && i >= 0; i--)
		num[i + 1] = num[i];
	num[i + 1] = n;

	show(num, N + 1);
	return 0;
}

