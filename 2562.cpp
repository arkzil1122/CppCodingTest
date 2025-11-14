#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N = 9;
	int temp, max, maxIdx;
	max = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp > max)
		{
			maxIdx = i + 1;
			max = temp;
		}
	}

	cout << max << endl;
	cout << maxIdx << endl;
	
	return 0;
}