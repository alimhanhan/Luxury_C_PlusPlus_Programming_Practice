#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[100];

	cout << "문자열 입력>>";
	cin.getline(str, 100);

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << str[j];
		}

		if (str[i + 1] == '\0')
		{
			break;
		}

		cout << endl;
	}
}