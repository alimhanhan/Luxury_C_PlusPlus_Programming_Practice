#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	string b;

	cout << "a�� �� �� = ";
	cin >> a;

	cout << "b�� �� �� = ";
	cin >> b;

	if (a == "����" && b == "����")
	{
		cout << "b ��" << endl;
	}
	else if (a == "����" && b == "��")
	{
		cout << "a ��" << endl;
	}
	else if (a == "����" && b == "����")
	{
		cout << "�����ϴ�." << endl;
	}
	else if (a == "����" && b == "����")
	{
		cout << "a ��" << endl;
	}
	else if (a == "����" && b == "����")
	{
		cout << "�����ϴ�." << endl;
	}
	else if (a == "����" && b == "��")
	{
		cout << "b ��" << endl;
	}
	else if (a == "��" && b == "����")
	{
		cout << "b ��" << endl;
	}
	else if (a == "��" && b == "����")
	{
		cout << "a ��" << endl;
	}
	else
	{
		cout << "�����ϴ�." << endl;
	}

	return 0;
}