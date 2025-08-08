#include "minor.h"

std::vector<std::vector<double>> minor(const std::vector<std::vector<double>>& matrix, int row, int column) {
    std::vector<std::vector<double>> minor;
    int n = matrix.size();

    for (int i = 0; i < n; i++) {
        if (i == row) continue;
        std::vector<double> newrow;
        for (int j = 0; j < n; j++) {
            if (j == column) continue;
            newrow.push_back(matrix[i][j]);
        }
        minor.push_back(newrow);
    }

    return minor;
}
