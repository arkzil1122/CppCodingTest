#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i + j < N-1) cout << ' ';
			else cout << '*';
		}
		cout << '\n';
	}
	return 0; 
}