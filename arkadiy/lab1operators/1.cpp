#include <iostream>
using namespace std;
int main()
{
	int A;
	int B;
	int C;
	cin >> A;
	cin >> B;
	cin >> C;
	if (A < B && B < C)
		cout << C - B - A;
	else if (A % C == 0)
		cout << A / C + B;
	else
		cout << A + B + C;

}