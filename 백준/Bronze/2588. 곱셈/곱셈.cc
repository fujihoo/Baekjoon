#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;
	cout << num1 * (num2 % 10) << endl
		<< num1 * ((num2 / 10) % 10) << endl
		<< num1 * (num2 / 100) << endl
		<< num1 * ((num2 % 10) + (((num2 / 10) % 10) * 10) + ((num2 / 100)) * 100) << endl;

	return 0;
}