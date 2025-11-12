#include <iostream>
using namespace std;

int main()
{
	// Test case 개수
	int T;
	cin >> T;
	int arr[10];

	bool isInArr;
	int targetNum, beautyScore;
	

	for (int i = 0; i < T; i++)
	{
		// 모든 case의 초기화
		beautyScore = 0;
		isInArr = false;
		cin >> targetNum;
		

		while (targetNum >= 10)
		{
			for (int j = 0;j < beautyScore;j++)
			{
				if ((targetNum % 10) - arr[j] == 0)
				{
					isInArr = true;
					break;
				}
				else isInArr = false;
			}

			if (!isInArr) arr[beautyScore++] = targetNum % 10;

			targetNum /= 10;
		}

		// 마지막 글자에 대해 반복
		for (int j = 0;j < beautyScore;j++)
		{
			if ((targetNum % 10) - arr[j] == 0)
			{
				isInArr = true;
				break;
			}
				else isInArr = false;
		}

		if (!isInArr) beautyScore += 1;

		cout << beautyScore << endl;
	}
	
	return 0;
}