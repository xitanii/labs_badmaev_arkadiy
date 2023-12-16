#include <iostream>

int sumatsifr(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void ubivanie(int* chislo, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (chislo[j] < chislo[j + 1]) {
                swap(chislo[j], chislo[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int* chislo = new int[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> chislo[i];
    }

    bool hasSum19 = false;
    for (int i = 0; i < n; i++) {
        if (sumatsifr(chislo[i]) == 19) {
            hasSum19 = true;
            break;
        }
    }

    if (!hasSum19) {
        ubivanie(chislo, n);
        for (int i = 0; i < n; i++) {
            std::cout << chislo[i] << " ";
        }
        std::cout << std::endl;
    }
    delete[] chislo;

    return 0;
}