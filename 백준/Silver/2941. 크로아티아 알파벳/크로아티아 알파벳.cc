#include <iostream>
#include <vector>
#include <string>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<string> croatian = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int idx;
	string str;
	
	cin >> str;

	for (int i = 0; i < croatian.size(); i++)
	{
		while (1)
		{
			idx = str.find(croatian[i]);
			if (idx == string::npos)
				break;
			str.replace(idx, croatian[i].length(), "#");
		}
	}
	cout << str.length();

	return 0;
}