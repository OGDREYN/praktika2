#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int array[] = { 12, -10, 8, -4, 18, -22 };
	int size = sizeof(array) / sizeof(array[0]);

	// Вывод положительных чисел
	for (int i = 0; i < size; ++i)
	{
		if (array[i] > 0)
		{
			cout << "положитьельные числа:";
			cout << array[i] << " " << endl;
		}
	}

	// Вывод отрицательных чисел
	for (int i = 0; i < size; ++i)
	{
		if (array[i] < 0)
		{
			cout << "отрицательные числа:";
			cout << array[i] << " " << endl;
		}
	}

	return 0;
}
