#include <iostream>
using namespace std;

int main()
{
	float five[6] = { };

	cout << "�Ǽ� 5���� �Է��Ͻÿ� : ";
	for (int i = 0; i < 5; i++)
	{
		float a=0;
		cin >> a;
		five[i] = a;
	}

	float biggest = five[0];
	for (int k = 1; k < 5; k++)
	{
		if (five[k] > biggest)
		{
			biggest = five[k];
		}
	}

	cout << "���� ū ���� " << biggest << "�Դϴ�." << endl;
}