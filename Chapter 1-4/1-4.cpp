#include <iostream>
using namespace std;

int main()
{

	for (int i=0; i<=3;i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}

		cout << '\n';
	}

	return 0;
}