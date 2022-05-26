#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A = 0, B = 0, C = 0, count = 0;
	cin >> A;
	C = A;
	while (1)
	{
		B = ((A % 10) * 10) + (((A % 10) + (A / 10)) % 10);
		count++;
		if (C == B)
		{
			break;
		}
		A = B;
	}
	if (C < 10)
	{
		cout << count++ << "\n";
	}
	else
	{
		cout << count << "\n";
	}
	return 0;
}