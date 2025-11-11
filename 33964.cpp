#include <iostream>
using namespace std;

int repu(int a)
{
	int res = 0;
	int temp = 1;
	for (int i = 0; i < a; i++)
	{
		res += temp;
		temp *= 10;
	}

	return res;
}

int main() {
	// 코드 작성
	int a, b;

	cin >> a >> b;

	int repuA = repu(a);
	int repuB = repu(b);

	cout << repuA + repuB << endl;

	return 0;
}