/* a와 b에 대한 입력은 0보다 커야 함.
마지막 case만 예외적으로 둘 다 0이 입력
정석은 a와 b모두 0인 것을 확인하는게 맞지만
귀찮으므로 a만 확인하자.
이번만입니다. 미안합니다.*/
#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int a, b;
	while (true)
	{
		cin >> a >> b;
		if (a == 0) break;
		cout << a + b << '\n';
	}
	return 0;
}