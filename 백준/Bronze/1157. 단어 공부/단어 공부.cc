#include <iostream>
#include <string>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int alpha[26] = { 0 };
	int cnt = 0, max = 0, max_index = 0;
	string input;

	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] < 97)
			alpha[input[i] - 65]++;
		else
			alpha[input[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (max < alpha[i])
		{
			max = alpha[i];
			max_index = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (max == alpha[i])
			cnt++;
	}

	if (cnt > 1)
		cout << "?";
	else
		cout << (char)(max_index + 65);

	return 0;
}