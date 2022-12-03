#include <iostream>
using namespace std;

int main()
{
	char mun[100];

	cout << "문자들을 입력하시오 : ";
	cin.getline(mun, 100,'\n');

	int num = 0;

	for (int i = 0; i < 100; i++)
	{
		if (mun[i] == 'x')
		{
			num++;
		}
	}

	cout << "x의 개수는 " << num << endl;
}