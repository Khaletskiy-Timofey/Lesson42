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

bool is_elements_in_ascending_order(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		bool flag = true;

		for (int j = 1; j < N; j++)
		{
			if (matrix[i][j - 1] >= matrix[i][j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return true;
		}
	}

	return false;
}

bool is_elements_in_descending_order(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		bool flag = true;

		for (int j = 1; j < N; j++)
		{
			if (matrix[i][j - 1] <= matrix[i][j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			return true;
		}
	}

	return false;
}

bool is_elements_sorted(int matrix[N][N])
{
	return is_elements_in_ascending_order(matrix) || is_elements_in_descending_order(matrix);
}

bool is_unique_elements(int matrix[N][N])
{
	int array[N * N]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int count = i * N + j;

			for (int g = 0; g < count; g++)
			{
				if (matrix[i][j] == array[g])
				{
					return true;
				}
			}

			array[count] = matrix[i][j];
		}
	}

	return false;
}