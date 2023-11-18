#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int posled[10000] = {};
	for (short i = 0; i < n; i++) {
		std::cin >> posled[i];
		int k = posled[i];
		int pervaya;
		int poslednyaa;
		poslednyaa = k % 10;
		while (k > 0) {
			pervaya = k % 10;
			k /= 10;
			if (pervaya == poslednyaa)
				for (int j = i; j < n - 1; j++)
					posled[j] = posled[j + 1];
			n--;
			if (pervaya == 3)
				for (int j = n; j > i; j++)
					posled[j] = posled[j - 1];
			n++;
			i++;
		}
	}
	for (short i = 0; i < n; i++)
		std::cout << posled[i] << ' ';
}