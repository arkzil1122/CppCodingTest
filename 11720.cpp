/* 정수로 입력받고 한자리씩 꺼내서 더할 생각이었으나.
N의 범위가 100까지인걸 보아 100자리 정수를 받기는 어렵다.
새로운 방법이 있지 않을까? 문자열로 받아서 하나씩 처리해보자*/
#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N, result = 0;
	string numStr;
	cin >> N >> numStr;

	for (int i = 0; i < N; i++)
	{
		result += numStr[i] - '0';
	}
	cout << result << endl;
	return 0;
}

/*결국 char도 숫자임. 그러나 ASCII코드의 값과 명시적인 숫자는 같지 않음.
'0'으로부터 시작된다는 것을 이용하여, '0'의 ASCII값을 빼면
우리가 원하는 결과를 얻을 수 있겠다.*/