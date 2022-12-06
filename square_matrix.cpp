#include "square_matrix.h"

std::random_device rd;
std::mt19937 gen(rd());

std::vector<double> transpose(const std::vector<double>& mat) {
	long long row_len = sqrt(mat.size());
	std::vector<double> trans_mat(mat.size());
	for (int i = 0; i < mat.size(); i++)
		trans_mat[i % row_len * row_len + i / row_len] = mat[i];
	return trans_mat;
}

void print(const std::vector<double>& mat1) {
	long long row_len = sqrt(mat1.size());
	for (int x = 0; x < row_len; x++) {
		for (int y = 0; y < row_len; y++)
			std::cout << mat1[row_len * x + y] << '\t';
		std::cout << std::endl;
	}
}

std::vector<double> matmul1(const std::vector<double>& mat1, const std::vector<double>& mat2) {
	long long row_len = sqrt(mat1.size());
	std::vector<double> transp_mat2 = transpose(mat2);
	std::vector<double> output(mat1.size());
	long long i = 0;
	for (int r1 = 0; r1 < row_len; r1++)
		for (int r2 = 0; r2 < row_len; r2++) {
			double summ = 0;
			for (int x = 0; x < row_len; x++)
				summ += mat1[row_len * r1 + x] * transp_mat2[row_len * r2 + x];
			output[i] = summ;
			i++;
		}
	return output;
}

std::vector<double> matmul2(const std::vector<double>& mat1, const std::vector<double>& mat2) {
	long long row_len = sqrt(mat1.size());
	std::vector<double> output(mat1.size());
	long long i = 0;
	for (int r1 = 0; r1 < row_len; r1++)
		for (int ñ2 = 0; ñ2 < row_len; ñ2++) {
			double summ = 0;
			for (int x = 0; x < row_len; x++)
				summ += mat1[row_len * r1 + x] * mat2[row_len * x + ñ2];
			output[i] = summ;
			i++;
		}
	return output;
}

std::vector<double> random_matrix(int dim, double min_value, double max_value) {
	std::uniform_real_distribution<> value(min_value, max_value);
	std::vector<double> output(dim * dim);
	for (int i = 0; i < dim * dim; i++)
		output[i] = value(gen);
	return output;
}