#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "두 수를 입력하시오: ";
	cin >> a >> b;

	if (a == b)
	{
		cout << "두 수가 같다.";
	}
	else if (a >= b)
	{
		cout << "큰 수 = "<<a;
	}
	else
	{
		cout <<"큰 수 = " << b;
	}
}