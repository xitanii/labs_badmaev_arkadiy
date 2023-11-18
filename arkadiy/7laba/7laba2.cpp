#include <iostream>


int sum(int n) {
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


short frst(int n) {
	while (n != 0) {
		n /= 10;
		if ((n / 10) == 0)
			return n;
	}
}


int main() {
	short n;
	std::cin >> n;
	int massive[10000] = {};
	for (short i = 0; i < n; i++)
		std::cin >> massive[i];
	for (short a = 0; a < n - 1; a++)
		for (short b = a + 1; b < n; b++) {
			if (sum(massive[b]) < sum(massive[a]))
				std::swap(massive[a], massive[b]);
			else if (sum(massive[b]) == sum(massive[a]))
				if ((frst(massive[b]) < frst(massive[a])))
					std::swap(massive[a], massive[b]);
			else if (sum(massive[b]) == sum(massive[a]))
				if (frst(massive[b]) == frst(massive[a]))
					if (massive[b] < massive[a])
						std::swap(massive[a], massive[b]);
		}
	for (short i = 0; i < n; i++)
		std::cout << massive[i] << ' ';
	std::cout << std::endl;
}