//
// Created by chris on 3/28/25.
//

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <cassert>
#include <cstdint>
#include <memory>

class Matrix
{
	 public:
	Matrix(std::size_t rows, std::size_t cols)
		: rows(rows)
		, cols(cols)
		, data(new float[rows * cols])
	{
	}
	float& operator[](std::size_t row, std::size_t col) { return data[row * cols + col]; }

	const float& operator[](std::size_t row, std::size_t col) const { return data[row * cols + col]; }

	const std::size_t rows;
	const std::size_t cols;

	 private:
	std::unique_ptr<float[]> data;
};

Matrix multiply_ijk(const Matrix& l, const Matrix& r);

Matrix multiply_ikj(const Matrix& l, const Matrix& r);

Matrix multiply_kij(const Matrix& l, const Matrix& r);

// ijk
#endif // MATRIX_HPP
