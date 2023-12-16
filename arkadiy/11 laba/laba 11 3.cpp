#include <iostream>
#include <cstdlib>

int main() {
    int n, m;
    std::cin >> n >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int maxSum = 0;
    int maxSumRow = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += abs(matrix[i][j]);
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxSumRow = i;
        }
    }

    for (int j = 0; j < m; j++) {
        matrix[maxSumRow][j] = 9999;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}