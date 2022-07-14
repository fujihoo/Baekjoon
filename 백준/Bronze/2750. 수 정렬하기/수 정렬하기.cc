#include <iostream>
#include <algorithm>

int main()
{
	int num;
	std::cin >> num;
	int* arr = new int[num + 1];

	for (int i = 0; i < num; i++)
	{
		std::cin >> arr[i];
	}

	std::sort(arr, arr+num);

	for (int i = 0; i < num; i++)
	{
		std::cout << arr[i] << "\n";
	}

	return 0;
}