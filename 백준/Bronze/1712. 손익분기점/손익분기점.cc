#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A = 0, B = 0, C = 0, num = 1;
	cin >> A >> B >> C;
	
	if (B >= C)
	{
		cout << "-1";
		return 0;
	}
	
	cout << A / (C - B) + 1;

	return 0;
}