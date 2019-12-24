#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b = 0;
	double a1;
	cout << "Введите число, которое требуется развернуть:" << endl;
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		cin.ignore((numeric_limits<streamsize>::max)(), '\n');
		cout << "Некорректные данные, попробуйте снова" << endl;
	}
	while (a > 0)
	{
		a1 = a % 10;
		a = a / 10;
		b = b * 10;
		b = b + a1;
	}
	cout << b;
	return 0;
}