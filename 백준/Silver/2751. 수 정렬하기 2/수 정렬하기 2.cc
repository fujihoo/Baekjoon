#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	vector<int> v;
	v.resize(num);
	for (int i = 0; i < num; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < num; i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}