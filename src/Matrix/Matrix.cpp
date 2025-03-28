//
// Created by chris on 3/28/25.
//

#include "Matrix.hpp"
Matrix multiply_ijk(const Matrix& l, const Matrix& r)
{
	assert(l.cols == r.rows);
	Matrix out(l.rows, r.cols);
	for (std::size_t i = 0; i < l.rows; ++i)
	{
		for (std::size_t j = 0; j < r.cols; ++j)
		{
			for (std::size_t k = 0; k < l.cols; ++k)
			{
				out[i, j] += l[i, k] * r[k, j];
			}
		}
	}
	return out;
}
Matrix multiply_ikj(const Matrix& l, const Matrix& r)
{
	assert(l.cols == r.rows);
	Matrix out(l.rows, r.cols);
	for (std::size_t i = 0; i < l.rows; ++i)
	{
		for (std::size_t k = 0; k < l.cols; ++k)
		{
			for (std::size_t j = 0; j < r.cols; ++j)
			{
				out[i, j] += l[i, k] * r[k, j];
			}
		}
	}
	return out;
}
Matrix multiply_kij(const Matrix& l, const Matrix& r)
{
	assert(l.cols == r.rows);
	Matrix out(l.rows, r.cols);
	for (std::size_t k = 0; k < l.cols; ++k)
	{
		for (std::size_t i = 0; i < l.rows; ++i)
		{
			for (std::size_t j = 0; j < r.cols; ++j)
			{
				out[i, j] += l[i, k] * r[k, j];
			}
		}
	}
	return out;
}