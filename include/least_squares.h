/// @file least_squares.h
/// Compute a least squares regression

/// @brief x, y datapoints for least squares regression
/// @param x The Iinput values
/// @param The output values
/// @param n The number of data points
#ifndef LEAST_SQUARES_H
#define LEAST_SQUARES_H

typedef struct {
    /// The input values
    double *x; 
    /// The output values
    double *y; 
    /// The number of data points
    int n; 
} Dataset;

/// @brief Read in some parameter data to the Dataset structure
/// @param filename Path to the file to read
/// @return A populated...
Dataset read_data(const char *filename);
/// Dataset
void solve_least_squares(const Dataset *data, double *slope, double *intercept);
void print_solution(double slope, double intercept);

#endif // LEAST_SQUARES_H
