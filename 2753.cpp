#include <iostream>
using namespace std;

bool isLeap(int year)
{
	if (year % 4 != 0) return false;
	if (year % 400 == 0) return true;
	if (year % 100 == 0) return false;
	return true;
}
int main() {
	// 코드 작성
	int year;
	cin >> year;

	(isLeap(year) ? cout << 1 : cout << 0);
	
	return 0;
}