#include "logic.h"

string find_indexes_with_zero_element(int matrix[N][N])
{
	string indexes = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 0)
			{
				indexes += to_string(i + 1) + " ";
				break;
			}
		}
	}

	return indexes;
}