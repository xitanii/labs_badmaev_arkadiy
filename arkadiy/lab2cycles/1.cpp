#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int const n = 5;
	float array[n] = {};

	for (int i = 0; i < n; i++) 
	{
		cout << "Введите число: ";
		cin >> array[i];
	}
	
	float multiplication = 1, mn = INT_MAX * 1.0;
	int index = 0;

	for (int i = 0; i < n; i++)
	{
		if ((array[i] < 0) && (abs(array[i]) - abs((int)array[i]) > 0))
		{
			multiplication *= array[i];
			if (array[i] < mn)
			{
				mn = array[i];
				index = i;
			}
		}
	}

	cout << endl;
	cout << "Произведение: " << multiplication << endl << "Минимальное число: " << mn << endl <<  "Индекс минимального числа: " << index << endl;

	return 0;
}