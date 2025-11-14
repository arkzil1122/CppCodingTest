#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << '\n';
	}
	return 0;
}

/*cin을 통해 입력을 받을 때
예상과 다른 값(값이 없거나, type이 다름)이
입력될 경우 false를 반환한다는 점을 이용.
EOF issue를 구현한 코드를 만들 수 있다.*/