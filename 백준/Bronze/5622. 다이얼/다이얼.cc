#include <iostream>
#include <string>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int sum = 0;
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		int element = s[i] - 'A';
		sum += arr[element];
	}

	cout << sum << "\n";

	return 0;
}