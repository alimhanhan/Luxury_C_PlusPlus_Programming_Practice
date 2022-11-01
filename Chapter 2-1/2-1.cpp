#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		cout << i << "\t";      // 탭으로 분리하려면 \n대신에 \t 사용
		
		if (i % 10 == 0)
		{
			cout << endl;
		}

	}
}