#include <iostream>

int main()
{
	using namespace std;
	int input = 0;
	int count = 0;
	int arr[9] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	int max = arr[0];

	for (int i = 0; i < 9; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
			count = i + 1;
		}
	}
	cout << max << "\n" << count << "\n";

	return 0;
}