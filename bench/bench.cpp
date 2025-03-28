//
// Created by chris on 17.10.24.
//

#include <benchmark/benchmark.h>
#include <vector>
#include <numeric>
#include <Matrix/Matrix.hpp>



static void BM_MatMul_ijk(benchmark::State& state)
{
	Matrix mat1{1000, 750};
	Matrix mat2{750, 2500};
	for (auto _ : state) {
		auto mat = multiply_ijk(mat1, mat2); // Perform the sum and prevent optimization
	}
}
static void BM_MatMul_ikj(benchmark::State& state)
{
	Matrix mat1{1000, 750};
	Matrix mat2{750, 2500};
	for (auto _ : state) {
		auto mat = multiply_ikj(mat1, mat2); // Perform the sum and prevent optimization
	}
}
static void BM_MatMul_kij(benchmark::State& state)
{
	Matrix mat1{1000, 750};
	Matrix mat2{750, 2500};
	for (auto _ : state) {
		auto mat = multiply_kij(mat1, mat2); // Perform the sum an prevent optimization
	}
}

// Register the function as a benchmark and set a range of input sizes
BENCHMARK(BM_MatMul_ijk)->Unit(benchmark::kMillisecond);
BENCHMARK(BM_MatMul_ikj)->Unit(benchmark::kMillisecond);
BENCHMARK(BM_MatMul_kij)->Unit(benchmark::kMillisecond);

// Main function to run the benchmarks
BENCHMARK_MAIN();
