#include "logic.h"
#include "tests.h"

void print(string name, int matrix[N][N], string expected)
{
	string actual = find_indexes_with_zero_element(matrix);

	string msg = actual == expected ? "PASS" : "FAIL";
	cout << name << ": " << msg << endl;
}

void test01()
{
	int matrix[][N]{
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 7, 8},
		{5, 6, 7, 8, 9}
	};

	string expected = "";
	print("Test01", matrix, expected);
}

void test02()
{
	int matrix[][N]{
		{1, 2, 3, 4, 5},
		{2, 3, 0, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 0, 8},
		{5, 6, 7, 8, 9}
	};

	string expected = "2 4 ";
	print("Test02", matrix, expected);
}

void test03()
{
	int matrix[][N]{
		{1, 0, 3, 4, 5},
		{2, 3, 0, 5, 6},
		{3, 4, 5, 0, 7},
		{4, 5, 6, 0, 8},
		{0, 6, 7, 8, 9}
	};

	string expected = "1 2 3 4 5 ";
	print("Test03", matrix, expected);
}