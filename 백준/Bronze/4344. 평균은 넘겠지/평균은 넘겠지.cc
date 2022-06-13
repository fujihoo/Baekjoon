#include <iostream>

int main()
{
	using namespace std;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n1 = 0, n2 = 0;
	int avg, num;
	int score[1000] = { 0 };
	double result;
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		avg = 0;
		num = 0;
		cin >> n2;
		{
			for (int j = 0; j < n2; j++)
			{
				cin >> score[j];
				avg += score[j];
			}
			avg /= (double)n2;
			for (int j = 0; j < n2; j++)
			{
				if (score[j] > avg)
				{
					num++;
				}
			}
			cout << fixed;
			cout.precision(3);
			result = (double)num / n2 * 100;
			cout << result << "%" << endl;
		}
	}
	return 0;
}