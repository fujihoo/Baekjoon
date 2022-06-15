#include <iostream>

int d(int number);

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n = 0, cnt = 0, hun = 0, ten = 0, one = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
		{
			cnt++;
		}
		if (i >= 100)
		{
			hun = i / 100;
			ten = (i % 100) / 10;
			one = i % 10;
			if (hun - ten == ten - one)
			{
				cnt++;
			}
		}
	}
	cout << cnt << "\n";

	return 0;
}