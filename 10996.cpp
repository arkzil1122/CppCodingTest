#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int num;
	cin >> num;

	for (int i = 0; i < num * 2; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < num; j++) {
				(j % 2 == 0 ? cout << '*' : cout << ' ');
			}
		}
		else {
			for (int k = 0; k < num; k++) {
				(k % 2 != 0 ? cout << '*' : cout << ' ');
			}
		}

		cout << endl;
	}
	return 0;
}