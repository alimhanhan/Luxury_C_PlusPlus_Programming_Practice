
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	char str[100];

	while (true)
	{
		cout << "종료하고 싶으면 yes를 입력하세요 >>";
		cin.getline(str, 100, '\n');

		if (strcmp(str, "yes") == 0)   //0 이면 참, 1이면 거짓임S
		{
			cout << "종료합니다.";
			break;
		}
	}
	return 0;
}