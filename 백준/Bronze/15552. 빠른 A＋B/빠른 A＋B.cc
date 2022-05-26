#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a = 0, b = 0, T = 0;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}