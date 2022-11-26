#include <iostream>
using namespace std;

int main()
{
	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b < 10; b++)
		{
			cout << b << "x" << a << "=" << a * b << " ";

			if ((b + 1) % 10 == 0)
			{
				cout << '\n';
			}
		}
	}

	return 0;
}