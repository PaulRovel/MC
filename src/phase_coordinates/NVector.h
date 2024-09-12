#pragma once
#include <iostream>
#include <cstddef>  // for std::size_t
#include <cassert>  // for assert

template <typename T, std::size_t N>
struct NVector {
    T data[N > 0 ? N : 1];  // Ensure array size is at least 1 for N=0

    // Access operators
    T& operator[](std::size_t i) {
        assert(i < N && "Index out of bounds!");
        return data[i];
    }

    const T& operator[](std::size_t i) const {
        assert(i < N && "Index out of bounds!");
        return data[i];
    }

    // Size getter
    constexpr std::size_t size() const {
        return N;
    }

    // Vector addition
    NVector<T, N> operator+(const NVector<T, N>& other) const {
        NVector<T, N> result;
        for (std::size_t i = 0; i < N; ++i) {
            result[i] = data[i] + other[i];
        }
        return result;
    }

    // In-place vector addition
    NVector<T, N>& operator+=(const NVector<T, N>& other) {
        for (std::size_t i = 0; i < N; ++i) {
            data[i] += other[i];
        }
        return *this;
    }

    // Vector subtraction
    NVector<T, N> operator-(const NVector<T, N>& other) const {
        NVector<T, N> result;
        for (std::size_t i = 0; i < N; ++i) {
            result[i] = data[i] - other[i];
        }
        return result;
    }

    // In-place vector subtraction
    NVector<T, N>& operator-=(const NVector<T, N>& other) {
        for (std::size_t i = 0; i < N; ++i) {
            data[i] -= other[i];
        }
        return *this;
    }

    // Scalar multiplication
    NVector<T, N> operator*(const T& scalar) const {
        NVector<T, N> result;
        for (std::size_t i = 0; i < N; ++i) {
            result[i] = data[i] * scalar;
        }
        return result;
    }

    // In-place scalar multiplication
    NVector<T, N>& operator*=(const T& scalar) {
        for (std::size_t i = 0; i < N; ++i) {
            data[i] *= scalar;
        }
        return *this;
    }

    // Scalar division
    NVector<T, N> operator/(const T& scalar) const {
        assert(scalar != 0 && "Division by zero!");  // Prevent division by zero
        NVector<T, N> result;
        for (std::size_t i = 0; i < N; ++i) {
            result[i] = data[i] / scalar;
        }
        return result;
    }

    // In-place scalar division
    NVector<T, N>& operator/=(const T& scalar) {
        assert(scalar != 0 && "Division by zero!");  // Prevent division by zero
        for (std::size_t i = 0; i < N; ++i) {
            data[i] /= scalar;
        }
        return *this;
    }

    // Output for debugging
    friend std::ostream& operator<<(std::ostream& os, const NVector<T, N>& arr) {
        os << "[";
        for (std::size_t i = 0; i < N; ++i) {
            os << arr[i];
            if (i < N - 1) os << ", ";
        }
        os << "]";
        return os;
    }
};
