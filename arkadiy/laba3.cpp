#include <iostream>
int main()
{
	unsigned int x;
	short i;
	std::cin >> x >> i;
	std::cout << (~(1 << i) & x) << std::endl;

}