#include <iostream>
using namespace std;

int main()
{
	int A = 0, B = 0, C = 0;

	cin >> A >> B >> C;
	if (A == B && B == C && C == A)
	{
		cout << 10000 + A * 1000 << endl;
	}
	else if (A == B && B != C)
	{
		cout << 1000 + A * 100 << endl;
	}
	else if (B == C && C != A)
	{
		cout << 1000 + B * 100 << endl;
	}
	else if (C == A && A != B)
	{
		cout << 1000 + C * 100 << endl;
	}
	else
	{
		if (A > B && A > C)
		{
			cout << A * 100 << endl;
		}
		else if (B > C && B > A)
		{
			cout << B * 100 << endl;
		}
		else
		{
			cout << C * 100 << endl;
		}
	}
	return 0;
}