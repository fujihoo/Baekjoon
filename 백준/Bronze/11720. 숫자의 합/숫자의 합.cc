#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt = 0, ans = 0;
	char c[101];
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> c[i];
		ans += (int)c[i] - '0';
	}
	cout << ans << "\n";

	return 0;
}