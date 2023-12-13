#include <iostream>
#include "Header2.hpp"
void Read(int matrix[nmax][nmax], int& n, int& m)
{
	std::cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			std::cin >> matrix[i][j];
}
void Write(int matrix[nmax][nmax], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}
void findmaxznach(int matrix[nmax][nmax], int maxznach[nmax], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		maxznach[i] = INT_MIN;
		for (int j = 0; j < m; j++)
		{
			if (maxznach[i] < matrix[i][j]) {
				maxznach[i] = matrix[i][j];
				int max = maxznach[i];
			}
		}
	}
}
bool eom(int matrix[nmax][nmax], int max, int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (max == matrix[i][j])
				return true;
	return false;
}
void sortirovka(int matrix[nmax][nmax], int max, int n, int m)
{
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < m - i - 1; j++) {
			if (countprimes(matrix[i]) < countprimes(matrix[i + 1])) {
				std::swap(matrix[i], matrix[i + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void primeinstrokah(int matrix[nmax][nmax], int n, int m)
{
	int countprimes(int matrix[]) {
		int count(0);
		for (int i = 0; i < size; i++) {
			if (matrix[i] == 2 || matrix[i] == 3) count++;  
			for (int k = 2; k <= matrix[i] / 2; k++) {
				if (matrix[i] % k == 0 || matrix[i] == 0) break;  
				if (k >= matrix[i] / 2) count++;    
			}
		}
		return count;
	}
}