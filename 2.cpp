//
#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int sist_to;
	int ishod;
	string result = "";
	int current_digit;

	cout << "Введите число: ";
	cin >> n;

	cout << "Ввидите исходную систему исчисления: ";
	cin >> ishod;

	cout << "Введите целую систему исчисления: ";
	cin >> sist_to;

	while (n != 0)
	{
		current_digit = n % sist_to;
		result = to_string(current_digit) + result;
		n /= sist_to;
	}
	cout << "число" << n << "\nиз системы счисления" << ishod << "\nв систему счисления" << sist_to << "\nравно" << result << endl;
	return 0;
