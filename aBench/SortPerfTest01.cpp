
#include <benchmark/benchmark.h>

#include <vector>
#include <iostream>
#include <algorithm>
#include "SortStuff.h"


void printVector(std::vector<int> v) {
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;
}

static void BM_SlowSort(benchmark::State& state) {
  std::vector<int> in_data = {8, 9, 3, 1, 0, 23, 3, 5, 7, 2, 11, 31, -1, -4, 4}; // 15 elements
  SortStuff sorter;
  for (auto _ : state)
    sorter.SlowSort(in_data.data(), 0, in_data.size());
}
// Register the function as a benchmark
BENCHMARK(BM_SlowSort);

// Benchmark the std::sort algorithms for comparison
static void BM_StdSort(benchmark::State& state) {
  std::vector<int> in_data = {8, 9, 3, 1, 0, 23, 3, 5, 7, 2, 11, 31, -1, -4, 4}; // 15 elements 
  for (auto _ : state)
    std::sort(in_data.begin(), in_data.end());
}
BENCHMARK(BM_StdSort);

BENCHMARK_MAIN();




