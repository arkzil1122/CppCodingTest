#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int a, b, c;

	cin >> a >> b >> c;

	// 경쟁사의 가격대비성능
	int scoreCom = b / a;
	// warboy는 경쟁사의 3배
	int scoreWarboy = scoreCom * 3;

	cout << scoreWarboy * c << endl;

	return 0;
}