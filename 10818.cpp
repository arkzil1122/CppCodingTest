/* 100만번의 입력. 배열을 만들어서 loop를 돌리기에는
시간이 많이 걸릴 거 같고. 어차피 간단한 비교
일회용으로 쓰고 버리자.
max와 min의 초기값 설정은 어떻게 하지?
정석은 주어진 값을 기준으로 수동 설정일텐데
뭔가 깔쌈한 방법이 있을거 같음.*/
#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N;
	int temp;

	cin >> N;

	// 첫 입력 값을 min과 max로 설정.
	cin >> temp;
	int min = temp;
	int max = temp;

	for (int i = 1; i < N; i++)
	{
		cin >> temp;
		if (temp > max) max = temp;
		if (temp < min) min = temp;
	}

	cout << min << ' ' << max << endl;

	return 0;
}