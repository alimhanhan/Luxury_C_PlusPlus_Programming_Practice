#include <iostream>
using namespace std;

int main()
{
	char major[30];
	int age;
	string job;

	cout << "What is your major?" << '\n';
	cin.getline(major, 30, '\n');
	cout << "I am majoring in "<<major<<"." << '\n';

	cout << "How old are you?"<<'\n';
	cin >> age;
	cout << "I am "<<age<<" years old." << '\n';

	cout << "What is your job?"<<'\n';
	cin >> job;
	cout << "My job is "<<job <<"." << endl;

	return 0;
}