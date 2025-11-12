/*
커봤자 5050의 제곱.
int안에 다 들어가겠다.
*/
#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int inputNum;
	cin >> inputNum;

	int uno = 0, dos = 0, tres = 0;

	for (int i = 1; i <= inputNum; i++) {
		uno += i;
		tres += i * i * i;
	}
	dos = uno * uno;

	cout << uno << endl;
	cout << dos << endl;
	cout << tres << endl;

	return 0;
}