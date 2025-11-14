#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int inputNum;
	cin >> inputNum;
	for (int i = 0; i < inputNum; i++)
	{
		cout << i + 1 << '\n';
	}
	return 0;
}

// endl으로 매번 물을 내리면 10만번 내리다가 시간 다간다.
// 반복 횟수가 많을 땐 \n으로 시간을 아끼자.