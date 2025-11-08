#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
	// 코드 작성
	time_t now = time(0);
	tm* localTime = localtime(&now);

	cout << 1900+(localTime->tm_year) << "-" 					// tm_year은 since 1900
	<< 1+(localTime->tm_mon) << "-"								// tm_mon은 0부터 시작
	<< setw(2) << setfill('0') << localTime->tm_mday << endl;	// 2자리 맞추기

	return 0;
}