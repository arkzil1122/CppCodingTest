#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N;
	cin >> N;
	for (int i = 1;i <= N;i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}