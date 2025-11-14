#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N;
	int result = 1;

	cin >> N;

	for (int i = 1; i <= N;i++)
	{
		result *= i;
	}
	cout << result << endl;
	
	return 0;
}