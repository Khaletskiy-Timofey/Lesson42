#include "logic.h"

int count_zero_elements(int matrix[N][N])
{
	int zero = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = N - i; j < N; j++)
		{
			if (matrix[i][j] == 0)
			{
				zero++;
			}
		}
	}

	return zero;
}