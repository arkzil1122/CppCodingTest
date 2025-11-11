#include <iostream>
using namespace std;

int main() {
	// 코드 작성
	int cent, quater, dime, nickel, penny;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> cent;

		quater = cent / 25;
		cent -= quater * 25;

		dime = cent / 10;
		cent -= dime * 10;

		nickel = cent / 5;
		cent -= nickel * 5;

		penny = cent;

		cout << quater << ' ' << dime <<
		' ' << nickel << ' ' << penny << endl;
	}

	return 0;
}