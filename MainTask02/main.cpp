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
	cout << "Even elements: " << count_even_elements(matrix) << endl;

	return 0;
}