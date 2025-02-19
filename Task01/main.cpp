#include "main.h"
#include "utils.h"

int main()
{
	int matrix[N][N]{};

	init_matrix(matrix, 0, 100);

	cout << matrix_to_string(matrix);

	return 0;
}