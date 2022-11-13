#include <string>
#include <benchmark/benchmark.h>
#include "../src/naive.hpp"

static void Naive(benchmark::State &state)
{
    // Code inside this loop is measured repeatedly
    for (auto _ : state)
    {
        std::string text = "123abaabba";
        std::string pattern = "baab";
        FastMatch::naive_match(text, pattern);
    }
}

BENCHMARK(Naive);
