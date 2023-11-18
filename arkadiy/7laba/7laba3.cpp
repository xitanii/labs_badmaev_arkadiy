#include <iostream>
#include <cmath>

int main() {
    const int MAX_SIZE = 100;


    int n, m;
    std::cin >> n;
    std::cin >> m;

    int matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int maxSumRow = 0;
    int maxSum = 0;
    for (int i = 0; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < m; ++j) {
            rowSum += std::abs(matrix[i][j]);
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxSumRow = i;
        }
    }

    for (int j = 0; j < m; ++j) {
        matrix[maxSumRow][j] = 9999;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}