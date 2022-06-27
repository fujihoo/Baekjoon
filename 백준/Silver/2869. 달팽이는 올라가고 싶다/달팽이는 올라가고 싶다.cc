#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A = 0, B = 0, V = 0;
	cin >> A >> B >> V;
	
	if (A >= V)
	{
		cout << "1";
	}
	else
	{
		if ((V - A) % (A - B) == 0)
		{
			cout << (V - A) / (A - B) + 1;
		}
		else
		{
			cout << (V - A) / (A - B) + 2;
		}
	}

	return 0;
}