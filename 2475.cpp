#include <iostream>
using namespace std;

int checkNum(int a, int b, int c, int d, int e)
{
	return ((a*a) + (b*b) + (c*c) + (d*d) + (e*e)) % 10;
}

int main() {
	// 코드 작성
	int a, b, c, d, e;
	int result;
	cin >> a >> b >> c >> d >> e;
	result = checkNum(a, b, c, d, e);
	cout << result << endl;
	return 0;
}