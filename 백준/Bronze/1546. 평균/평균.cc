#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double arr[1000] = { 0 };
	double num = 0;
	double sum = 0;
	double max = 0;
	
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];

	for (int i = 0; i < num; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
		}
	}
	
	for (int i = 0; i < num; i++)
	{
		arr[i] = (arr[i] / max) * 100;
	}
	
	for (int i = 0; i < num; i++)
	{
		sum += arr[i];
	}

	cout << sum / num << "\n";

	return 0;
}