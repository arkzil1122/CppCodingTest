#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int first, sec, temp;
	bool isAscending = true;
	cin >> first >> sec;

	if (first - sec != 1 && sec - first != 1)
	{
		cout << "mixed";
		return 0;
	}
	else if (first - sec == 1) isAscending = false;
	else isAscending = true;

	for (int i = 2; i < 8; i++)
	{
		cin >> temp;
		if (isAscending)
		{
			if (temp - sec == 1)
			{
				sec = temp;
			}
			else
			{
				cout << "mixed";
				return 0;
			}
		}

		else
		{
			if (sec - temp == 1)
			{
				sec = temp;
			}
			else
			{
				cout << "mixed";
				return 0;
			}
		}
	}

	(isAscending ? cout << "ascending" : cout << "descending");

	return 0;
}