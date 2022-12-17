#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int sum = 0;  //번 돈의 총액
	char coffee[100];  // 메뉴명
	int num = 0;  //메뉴 수량

	while (1)
	{
		cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.";
		cout << "주문 >>";

		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0)
		{
			cout << 2000 * num << "원입니다."<<'\n';
			sum = sum + num * 2000;
		}
		else if (strcmp(coffee, "아메리카노") == 0)
		{
			cout << 2300 * num << "원입니다."<<'\n';
			sum = sum + num * 2300;
		}
		else
		{
			cout << 2500 * num << "원입니다."<<'\n';
			sum = sum + num * 2500;
		}

		if (sum >= 20000)
		{
			cout << "금일 판매액이 20000원을 넘어 장사를 마칩니다.(금일 판매액 : " << sum << " )" << endl;
			break;
		}
	}

}