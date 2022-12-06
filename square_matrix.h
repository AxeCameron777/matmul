#pragma once

#include<iostream>
#include<vector>
#include<cmath>
#include <random>

std::vector<double> transpose(const std::vector<double>& mat);
// Transposes matrix and returns transposed result


void print(const std::vector<double>& mat1);
// Prints 1d vector as matrix

std::vector<double> matmul1(const std::vector<double>& mat1, const std::vector<double>& mat2);
// Returns result of multiplication mat1 with mat2 with transpose

std::vector<double> matmul2(const std::vector<double>& mat1, const std::vector<double>& mat2);

std::vector<double> random_matrix(int dim, double min_value = 0.0, double max_value = 100.0);
// Returns random matrix with size equal dim