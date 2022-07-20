#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, n, m;
	cin >> k;

	n = ceil((sqrt(8 * k + 1) - 1) / 2);
	m = k - ((n * (n - 1)) / 2) - 1;
	if (n % 2 == 1)
	{
		cout << n - m << "/" << 1 + m;
	}
	else
	{
		cout << 1 + m << "/" << n - m;
	}
	return 0;
}