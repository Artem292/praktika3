#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	arr[i] = rand() % 21 - 10;
	cout << "Массив:";
	for (int i = 0; i < size; i++)
		cout << arr[i] << "";
	cout << endl;
	cout << "Положительные:";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
			cout << arr[i] << "";
	}
	cout << endl;
	cout << "Отрицательные:";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
			cout << arr[i] << "";
	}
	cout << endl;
	return 0;
}