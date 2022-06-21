#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s;
	int cnt = 1;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
			cnt++;
	}
	if (s[0] == ' ')
		cnt--;
	if (s[0] == '\0')
		cnt = 0;
	if (s[s.length() - 1] == ' ')
		cnt--;

	cout << cnt << '\n';

	return 0;
}