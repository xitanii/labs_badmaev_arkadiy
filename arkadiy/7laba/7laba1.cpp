#include <iostream>


int main() {
	short n;
	std::cin >> n;
	int massive[10000] = {};
	bool flag = false;
	for (short i = 0; i < n; i++) {
		std::cin >> massive[i];
		int k = massive[i];
		int sum = 0;
		while (k != 0) {
			sum += k % 10;
			k /= 10;
		}
		if (sum == 19) {
			flag = true;
		}
	}
	if (flag)
		for (short a =0; a < n-1; a++)
			for (short b = a + 1; b < n; b++)
				if (massive[b] > massive[a])
					std::swap(massive[a], massive[b]);
	for (short i = 0; i < n; i++) {
		std::cout << massive[i] << ' ';
	}
	std::cout << std::endl;
}