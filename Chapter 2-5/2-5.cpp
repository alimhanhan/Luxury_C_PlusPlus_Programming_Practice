#include <iostream>
using namespace std;

int main()
{
	char mun[100];

	cout << "���ڵ��� �Է��Ͻÿ� : ";
	cin.getline(mun, 100,'\n');

	int num = 0;

	for (int i = 0; i < 100; i++)
	{
		if (mun[i] == 'x')
		{
			num++;
		}
	}

	cout << "x�� ������ " << num << endl;
}