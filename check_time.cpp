#include "check_time.h"

void check_time(const std::vector<int>& dim, std::function<std::vector<double>(std::vector<double>, std::vector<double>)> func) {
	for (auto d : dim) {
		std::vector<double> mat1 = random_matrix(d);
		std::vector<double> mat2 = random_matrix(d);
		auto time1 = std::chrono::high_resolution_clock::now();
		func(mat1, mat2);
		auto time2 = std::chrono::high_resolution_clock::now();
		double delta = std::chrono::duration<double>(time2 - time1).count();
		std::cout << "N = " << d << "\tTime = " << delta << std::endl;
	}
}
