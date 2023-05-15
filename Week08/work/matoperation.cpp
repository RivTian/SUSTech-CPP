#include <iostream>
#include "matoperation.hpp"

#ifdef WITH_AVX2
#include <immintrin.h
#endif

#ifdef WITH_NEON
#include <arm_neon.h>
#endif

#ifdef _OPENMP
#include <omp.h>
#endif

float dotproduct(const float *p1, const float *p2, size_t n) {
    float sum = 0.0f;
    for (size_t i = 0; i < n; i++) sum += (p1[i] * p2[i]);
    return sum;
}

float dotproduct_unloop(const float *p1, const float *p2, size_t n) {
    if (n % 8 != 0) {
        std::cerr << "The size n must be a multiple of 8" << std::endl;
        return 0.0f;
    }
}