#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;

	cout << "�� ���� �Է��Ͻÿ�: ";
	cin >> a >> b;

	if (a == b)
	{
		cout << "�� ���� ����.";
	}
	else if (a >= b)
	{
		cout << "ū �� = "<<a;
	}
	else
	{
		cout <<"ū �� = " << b;
	}
}