#include "utils.h"

void init_matrix(int matrix[N][N], int start, int end)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % (end - start + 1) + start;
		}
	}
}

string matrix_to_string(int matrix[N][N])
{
	string matrix_string = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix_string += to_string(matrix[i][j]) + " ";
		}
		matrix_string += "\n";
	}

	return matrix_string;
}