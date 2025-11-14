#include <iostream>
#include <string>
using namespace std;

int main() {
	// 코드 작성
	string strA, strB, strC;
	int intA, intB, intC;
	cin >> strA >> strB >> strC;

	intA = stoi(strA);
	intB = stoi(strB);
	intC = stoi(strC);

	cout << intA + intB - intC << endl;
	cout << stoi(strA + strB) - intC << endl;

	return 0;
}

/* string header의 stoi(string -> int)를 잘 활용하자.*/