#include <stdio.h>
#include <math.h>
#include <time.h>
#include <random>
int main2()
{
	int massiv[1000], N, i, maxmass;
	printf("Vvedite razmer massiva: ");
	scanf_s("%d", &N);
	maxmass = 0;
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		massiv[i] = rand() % 100;
		printf(" massiv[%d] = %4d;\n", i, massiv[i]);
	}
	for (i = 2; i < N; i++)
	{
		if (massiv[i - 1] > massiv[i - 2] && massiv[i - 1] > massiv[i])
		{
			maxmass = massiv[i - 1] * massiv[i - 1];
			printf("local maximum = %d\n", maxmass);
			printf("element = %d\n", massiv[i - 1]);
		}

	}
	return 0;
}
