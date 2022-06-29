#include <iostream>

int main()
{
    using namespace std;
    int N, temp;
    int cnt = 0, result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        for (int div = 1; div <= temp; div++)
        {
            if (temp % div == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
        {
            result++;
        }
        cnt = 0;
    }
    cout << result;
    return 0;
}