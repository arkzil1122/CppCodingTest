#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int a, b;
	cin >> a >> b;

	if (a == b) cout << "==" << endl;
	else {
		(a > b ? cout << ">" : cout << "<");
	}
	
	return 0;
}