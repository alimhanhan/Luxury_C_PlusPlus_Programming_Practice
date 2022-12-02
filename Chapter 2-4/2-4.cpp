#include <iostream>
using namespace std;

int main()
{
	float five[6] = { };

	cout << "실수 5개를 입력하시오 : ";
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

	cout << "가장 큰 수는 " << biggest << "입니다." << endl;
}