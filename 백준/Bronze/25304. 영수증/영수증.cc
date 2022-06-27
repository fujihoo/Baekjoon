#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int total = 0, num = 0, add = 0;
	cin >> total;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int price, numofobj;
		cin >> price;
		cin >> numofobj;
		add += price * numofobj;
	}

	if (total == add)
	{
		cout << "Yes";
		return 0;
	}
	else
	{
		cout << "No";
		return 0;
	}

	return 0;
}