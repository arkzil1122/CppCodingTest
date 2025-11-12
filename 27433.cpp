/* N이 20이다.
20!은 int로는 절대 저장 못할듯
long long type을 써야겠어. */

#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int N;
	long long result = 1;

	cin >> N;
	
	while (N)
	{
		result *= N--;
	}

	cout << result << endl;

	return 0;
}