#include <iostream>
#include <string>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int cnt = 0;
	string str;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> str;
		bool flag = true;
		for (int j = 0; j < str.length(); j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (str[j] != str[j-1] && str[j] == str[k])
					{
						flag = false;
						break;
					}
			}
		}
		if (flag)
			cnt++;
	}

	cout << cnt << "\n";

	return 0;
}