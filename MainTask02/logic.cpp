#include "logic.h"

int count_even_elements(int matrix[N][N])
{
	int even = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (matrix[i][j] % 2 == 0)
			{
				even++;
			}
		}
	}

	return even;
}