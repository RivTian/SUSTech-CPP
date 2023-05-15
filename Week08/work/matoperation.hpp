#pragma once

float dotproduct(const *p1, const *p2, size_t n);
float dotproduct_unloop(const *p1, const *p2, size_t n);
float dotproduct_avx2(const *p1, const *p2, size_t n);
float dotproduct_avx2_omp(const *p1, const *p2, size_t n);
float dotproduct_neon_omp(const *p1, const *p2, size_t n);