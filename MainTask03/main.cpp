#include <time.h>
#include "main.h"
#include "logic.h"
#include "utils.h"

int main()
{
	srand(time(0));

	int matrix[N][N];

	init_matrix(matrix, -9, 9);

	cout << matrix_to_string(matrix) << endl;
	cout << "Positive elements: " << count_positive_elements(matrix) << endl;

	return 0;
}