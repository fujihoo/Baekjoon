#include <iostream>
using namespace std;

int main()
{
    double a = 0, b = 0;
    cin >> a >> b;
    if (b != 0)
    {
        cout << fixed;
        cout.precision(30);
        cout << (a / b) << endl;
    }
    else
    {
        return 1;
    }
    return 0;
}