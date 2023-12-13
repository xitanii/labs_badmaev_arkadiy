#include "Header2.hpp"

int main()
{
	int n, m;
	int matrix[nmax][nmax];
	int countprimes(int matrix[]);
	int maxznach[nmax];
	int max = 0;
	//ввод
	ab:: Read(matrix, n, m);
	//определить есть есть ли такое же максимальное число в матрице
	ab::findmaxznach(matrix, maxznach, n, m);
	if (ab::eom(matrix, max, n, m)) {
		//сортировка и нахождение колва простых чисел в матрице
		ab::primeinstrokah(matrix, n, m);
		ab::sortirovka(matrix, max, n, m);
	}


	
	return 0;
}


