#pragma once

#include<chrono>
#include<iostream>
#include<vector>
#include<functional>

#include "square_matrix.h"

void check_time(const std::vector<int>& dim, std::function<std::vector<double>(std::vector<double>, std::vector<double>)> func);
// Checks time of matmul with matrix sizes from dim

