#include <iostream>
#include <algorithm>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int res[10] = { 0 };
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> res[i];
		res[i] %= 42;
	}

	sort(res, res + 10);

	for (int i = 1; i < 10; i++)
	{
		if (res[i - 1] != res[i])
		{
			count++;
		}
	}

	cout << count + 1 << "\n";

	return 0;
}