#pragma once
#define nmax 100
namespace ab {

	void Read(int matrix[nmax][nmax], int& n, int& m);

	void Write(int matrix[nmax][nmax], int n, int m);
	
	void findmaxznach(int matrix[nmax][nmax], int maxznach[nmax], int n, int m);

	bool eom(int matrix[nmax][nmax], int max, int n, int m);

	void sortirovka(int matrix[nmax][nmax], int max, int n, int m);

	void primeinstrokah(int matrix[nmax][nmax], int n, int m);
	 

}
