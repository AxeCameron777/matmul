#include<iostream>

#include "square_matrix.h"
#include "check_time.h"

int main() {
	using namespace std;

	vector<double> matrix1 = { 1, 2, 3, 4,
							   3, 4, 5, 5,
							   2, 7, 6, 6,
							   1, 9, 8, 7
	};

	vector<double> matrix2 = { 1, 2, 0, 0,
							   2, 1, 2, 0,
							   0, 2, 1, 2,
							   0, 0, 2, 1
	};

	vector<double> answer = matmul1(matrix1, matrix2);
	cout << "Matrix1:\n\n";
	print(matrix1);
	cout << "\nMatrix2:\n\n";
	print(matrix2);
	cout << "\nMatrix1 * Matrix2:\n\n";
	print(answer);
	cout << "\n\n\n";

	check_time({ 200, 400, 600, 800, 1000, 1200, 1400, 1600, 1800, 2000, 2200, 2400}, matmul1);

	return 0;
}
