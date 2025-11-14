/* 최대 1000^3이니까 int형에는 잘 들어간다.*/
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int result;
	cin >> a >> b >> c;
	result = a * b * c;

	// 0~9까지 초기화
	int res0 = 0;
	int res1 = 0;
	int res2 = 0;
	int res3 = 0;
	int res4 = 0;
	int res5 = 0;
	int res6 = 0;
	int res7 = 0;
	int res8 = 0;
	int res9 = 0;

	while (result)
	{
		switch (result % 10) {
		case 0:
			res0 += 1;
			result /= 10;
			break;
		case 1:
			res1 += 1;
			result /= 10;
			break;
		case 2:
			res2 += 1;
			result /= 10;
			break;
		case 3:
			res3 += 1;
			result /= 10;
			break;
		case 4:
			res4 += 1;
			result /= 10;
			break;
		case 5:
			res5 += 1;
			result /= 10;
			break;
		case 6:
			res6 += 1;
			result /= 10;
			break;
		case 7:
			res7 += 1;
			result /= 10;
			break;
		case 8:
			res8 += 1;
			result /= 10;
			break;
		case 9:
			res9 += 1;
			result /= 10;
			break;
		}
	}

	cout << res0 << endl;
	cout << res1 << endl;
	cout << res2 << endl;
	cout << res3 << endl;
	cout << res4 << endl;
	cout << res5 << endl;
	cout << res6 << endl;
	cout << res7 << endl;
	cout << res8 << endl;
	cout << res9 << endl;

	return 0;
}

/* 배열 선언이 귀찮아서 더 귀찮은 짓을 했다.
다시 한번만 해보자.*/

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
// 	int num[11];
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	int result = a * b * c;

// 	string resultStr = to_string(result);

// 	for (auto i : resultStr)
// 	{
// 		num[i - '0']++;
// 	}

// 	for (auto i : num)
// 	{
// 		cout << i << '\n';
// 	}
// }