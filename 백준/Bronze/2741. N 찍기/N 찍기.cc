#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N = 0;
	
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cout << i + 1 << "\n";
	}

	return 0;
}