#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int sum = 0;  //�� ���� �Ѿ�
	char coffee[100];  // �޴���
	int num = 0;  //�޴� ����

	while (1)
	{
		cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.";
		cout << "�ֹ� >>";

		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0)
		{
			cout << 2000 * num << "���Դϴ�."<<'\n';
			sum = sum + num * 2000;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
		{
			cout << 2300 * num << "���Դϴ�."<<'\n';
			sum = sum + num * 2300;
		}
		else
		{
			cout << 2500 * num << "���Դϴ�."<<'\n';
			sum = sum + num * 2500;
		}

		if (sum >= 20000)
		{
			cout << "���� �Ǹž��� 20000���� �Ѿ� ��縦 ��Ĩ�ϴ�.(���� �Ǹž� : " << sum << " )" << endl;
			break;
		}
	}

}