#include <iostream>
using namespace std;

int main()
{
	int H = 0, M = 0;

	cin >> H >> M;
	if (M >= 45)
	{
		cout << H << " " << M - 45 << endl;
	}
	else
	{
		if (H == 0)
		{
			cout << "23 " << M + 15 << endl;
		}
		else
		{
			cout << H - 1 << " " << M + 15 << endl;
		}
	}

	return 0;
}