#include "logic.h"

int count_positive_elements(int matrix[N][N])
{
	int positive = 0;

	for (int i = 0; i < N; i++)
	{
		int length = N - i - 1;

		for (int j = 0; j < length; j++)
		{
			if (matrix[i][j] > 0)
			{
				positive++;
			}
		}
	}

	return positive;
}