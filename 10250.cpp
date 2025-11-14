/* 몇층 몇호인지 알아내는건 크게 어렵지 않다.
BUT XYY or XXYY형식으로 출력하는데 있어서
YY를 어떻게 처리하느냐에 대한 생각을 해 봐야 할 것 같다.
*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{
	int T, width, height, num;
	int floor, room;

	cin >> T;
	while (T--)
	{
		cin >> height >> width >> num;
		(num % height == 0 ? floor = height : floor = num % height);
		(num % height == 0 ? room = num / height : room = (num / height) + 1);

		printf("%d%02d\n", floor, room);
	}

	return 0;
}