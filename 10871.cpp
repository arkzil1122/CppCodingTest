/* 여러가지 방법들이 있을 것 같음.
for문을 돌면서 cout로 출력하는데,
endl 없이 공백으로만 구분
근데 이건 너무 짜칠 것 같음

python이었다면?
target보다 작은 수의 index를 담는 list를 만들 것.
list의 최댓값이 10000이 될 수도 있는데?
동적 할당을 한다면 어떻게 해야하지?

만약에 줄바꿈 없이 하나씩 출력할 때,
마지막에 남을 공백 하나는 어쩌지?
근데 잠깐만 10000개의 수를 일일이 입력받을 수는 없고,
공백으로 구분된 입력버퍼에서 하나씩 가져와야해?
*/

#include <iostream>
using namespace std;

int main() {
	// 코드 작성

	int N, targetNum, inputNum;
	bool needSpace = false;

	cin >> N >> targetNum;

	while (N--)
	{
		cin >> inputNum;
		if (inputNum < targetNum)
		{
			if (!needSpace)
			{
				cout << inputNum;
				needSpace = true;
			}
			else cout << ' ' << inputNum;
		}
	}
	return 0;
}

/* 마지막 공백 처리를 하지 않았음.
Test case에서 문제없이 통과되어 제출함.
상당히 부끄러운 코드다.
제출은 완료했으나 마지막 공백을 처리하는 코드를
고민해서 구현해보자. */