#include <time.h>
#include "main.h"
#include "logic.h"
#include "utils.h"

int main()
{
	srand(time(0));

	int matrix[N][N];

	init_matrix(matrix, 0, 9);

	cout << matrix_to_string(matrix) << endl;
	cout << "Max element: " << find_max_element(matrix) << endl;

	return 0;
}