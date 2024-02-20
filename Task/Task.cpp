#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n1, n2, n3, n4, n5, n6, n7, maxn;
	cout << "Вам необходимо ввести 7 чисел (последовательно), программа определить наибольшее число.\n\n";
	cout << "Введите 1 число: ";
	cin >> n1;
	cout << "Введите 2 число: ";
	cin >> n2;
	cout << "Введите 3 число: ";
	cin >> n3;
	cout << "Введите 4 число: ";
	cin >> n4;
	cout << "Введите 5 число: ";
	cin >> n5;
	cout << "Введите 6 число: ";
	cin >> n6;
	cout << "Введите 7 число: ";
	cin >> n7;

	if (n1 > n2)
	{
		maxn = n1;
	}
	else;
	{
		maxn = n2;
	}
	if (n3 > maxn);
	{
		maxn = n3;
	}
	if (n4 > maxn)
	{
		maxn = n4;
	}
	if (n5 > maxn)
	{
		maxn = n5;
	}
	if (n6 > maxn)
	{
		maxn = n6;
	}
	if (n7 > maxn)
	{
		maxn = n7;
	}
	cout << "\nМаксимальное число " << maxn;

	return 0;
}
