#include <iostream>
using namespace std;

int main()
{
	string one;
	string two;

	cout << "�� ��ȣ�� �Է��϶� = ";
	cin >> one;
	cout << '\n';

	cout << "�� ��ȣ�� �ٽ� �ѹ� �Է��϶� = ";
	cin >> two;
	cout << '\n';

	if (one == two)
	{
		cout << "�����ϴ�." << endl;
	}
	else
	{
		cout << "���� �ʽ��ϴ�." << endl;
	}
}