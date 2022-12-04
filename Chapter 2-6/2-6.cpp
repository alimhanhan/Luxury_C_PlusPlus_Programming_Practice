#include <iostream>
using namespace std;

int main()
{
	string one;
	string two;

	cout << "새 암호를 입력하라 = ";
	cin >> one;
	cout << '\n';

	cout << "새 암호를 다시 한번 입력하라 = ";
	cin >> two;
	cout << '\n';

	if (one == two)
	{
		cout << "같습니다." << endl;
	}
	else
	{
		cout << "같지 않습니다." << endl;
	}
}