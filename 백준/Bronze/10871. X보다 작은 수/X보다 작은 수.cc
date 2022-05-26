#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0, X = 0;
	cin >> N >> X;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> *(arr + i);
		if (X > *(arr + i))
		{
			cout << *(arr + i) << " ";
		}
	}

	return 0;
}