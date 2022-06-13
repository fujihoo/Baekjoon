#include <iostream>
#include <string>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	string s;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		int sum = 0, cnt = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == 'O')
			{
				cnt++;
			}
			else
			{
				cnt = 0;
			}
			sum += cnt;
		}
		cout << sum << '\n';
	}
}