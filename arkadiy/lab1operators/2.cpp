#include <iostream>
using namespace std;
/* Код хугардена - 1
* Код йогурта - 2
* Код Чапмана - 3
* Код Короны экстра - 4
* код хлеба - 5
*/
int main()
{
	int n;
	cin >> n;
	switch (n) {
	case 1:	cout << "Vishneviy Hoegaarden";
		break;
	case 2: cout << "Yogurt";
		break;
	case 3: cout << "Chapman";
		break;
	case 4:cout << "Corona Extra";
		break;
	case 5: cout << "Khleb";
		break;
	default: cout << "Tovara ne obnaruzheno";
	}
}



	
				
