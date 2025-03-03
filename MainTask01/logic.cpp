#include "logic.h"

int find_max_element(int matrix[N][N])
{
	int max = matrix[0][1];

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
		}
	}

	return max;
}