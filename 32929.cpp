#include <iostream>
using namespace std;

int main() {
	int target;

	cin >> target;

	if (target % 3 == 1) cout << 'U';
	else if (target % 3 == 2) cout << 'O';
	else cout << 'S';

	return 0;
}