#include <iostream>
#include <string>

int factorial(int n);

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << factorial(n) << "\n";

	return 0;
}

int factorial(int n)
{
	if (n < 1)
		return 1;
	return n * factorial(n - 1);
}