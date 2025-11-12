#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int playerNum;

	cin >> playerNum;

	cout << ((playerNum - 1) * (playerNum - 2) * (playerNum - 3)) / 6 << endl;
	
	return 0;
}