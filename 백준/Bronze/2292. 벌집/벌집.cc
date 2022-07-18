#include <iostream>

int main()
{
	int iNum;
	int iMinimumofRoom = 0;
	std::cin >> iNum;

	if (iNum == 1)
	{
		iMinimumofRoom = 1;
	}
	else
	{
		for (int sum = 2; sum <= iNum; iMinimumofRoom++)
			sum += 6 * iMinimumofRoom;
	}

	std::cout << iMinimumofRoom;

	return 0;
}