#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	long long N, M;

	cin >> N >> M;

	(N > M ? cout << (N - M) : cout << (M - N));

	return 0;
}