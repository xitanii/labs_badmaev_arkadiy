#include <iostream>
using namespace std;
int main()
{
	int N;
	char a;
	char min = 9;
	cin >> N;
	while (N > 0) {
		a = N % 10;
		if (a < min)
			min = a;
		N = N / 10;
	}

	cout << min;
}