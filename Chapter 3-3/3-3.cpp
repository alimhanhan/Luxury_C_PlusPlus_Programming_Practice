#include <iostream>
#include <string>
using namespace std;

class Account {
	int id, balance;
	string name;
public:
	Account(string n, int i, int b);
	string getowner();
	int inquiry();
	int withdraw(int money);
	void deposit(int money);
};

Account::Account(string n, int i, int b) {
	name = n; id = i; balance = b;
}

string Account::getowner() {
	return name;
}

int Account::inquiry() {
	return balance;
}

int Account::withdraw(int money) {
	if (money > balance) {
		cout << "ÀÜ¾×ÀÌ ºÎÁ·ÇÕ´Ï´Ù.";
	}
	else {
		balance -= money;
		return money;
	}
}

void Account::deposit(int money) {
	balance += money;
}

int main() {
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getowner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}