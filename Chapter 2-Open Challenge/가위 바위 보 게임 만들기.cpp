#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	string b;

	cout << "a가 낸 것 = ";
	cin >> a;

	cout << "b가 낸 것 = ";
	cin >> b;

	if (a == "가위" && b == "바위")
	{
		cout << "b 승" << endl;
	}
	else if (a == "가위" && b == "보")
	{
		cout << "a 승" << endl;
	}
	else if (a == "가위" && b == "가위")
	{
		cout << "비겼습니다." << endl;
	}
	else if (a == "바위" && b == "가위")
	{
		cout << "a 승" << endl;
	}
	else if (a == "바위" && b == "바위")
	{
		cout << "비겼습니다." << endl;
	}
	else if (a == "바위" && b == "보")
	{
		cout << "b 승" << endl;
	}
	else if (a == "보" && b == "가위")
	{
		cout << "b 승" << endl;
	}
	else if (a == "보" && b == "바위")
	{
		cout << "a 승" << endl;
	}
	else
	{
		cout << "비겼습니다." << endl;
	}

	return 0;
}