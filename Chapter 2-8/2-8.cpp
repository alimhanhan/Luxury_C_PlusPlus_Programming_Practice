#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char name[100];
	char longname[100];
	int big = 0;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ��� \n" << ">>";

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		int size = sizeof(name);
		if (strlen(name) > big) {
			big = strlen(name);
			strcpy_s(longname, name);
		}
	}
	cout << "���� �� �̸��� " << longname;
}