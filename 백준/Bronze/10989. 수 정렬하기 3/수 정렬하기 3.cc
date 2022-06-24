#include <iostream>
#include <string>
#include <vector>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num;
	int arr[10001] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[num]++;
	}

	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < arr[i]; j++)
			cout << i << "\n";

	return 0;
}