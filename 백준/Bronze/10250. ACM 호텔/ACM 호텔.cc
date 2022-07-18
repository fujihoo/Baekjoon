#include <iostream>

int main()
{
	int iTestNum;
	int H, W, N;
	int RoomNum;
	std::cin >> iTestNum;

	for (int i = 0; i < iTestNum; i++)
	{
		std::cin >> H >> W >> N;
		int YY, XX;

		YY = N % H;
		XX = N / H;

		if (YY != 0)
			XX += 1;
		else
			YY = H;
		RoomNum = 100 * YY + XX;
		std::cout << RoomNum;
		if (i < iTestNum - 1)
		{
			std::cout << "\n";
		}
	}
	return 0;
}