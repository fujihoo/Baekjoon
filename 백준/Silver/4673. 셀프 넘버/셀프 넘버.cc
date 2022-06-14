#include <iostream>

int d(int number);

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool check[10000] = { false };

	for (int i = 0; i < 10000; i++)
	{
		int n = d(i);
		if (n < 10000)
		{
			check[n] = true;
		}
	}
	for (int i = 0; i < 10000; i++)
	{
		if (!check[i])
		{
			cout << i << "\n";
		}
	}

	return 0;
}

int d(int number)
{
	int sum = number;

	while (number)
	{
		sum = sum + (number % 10);
		number = number / 10;
	}

	return sum;
}