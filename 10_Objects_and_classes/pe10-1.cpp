// pe10-1.cpp 

#include <iostream>
#include <string>

class Account 
{
private:
	std::string depositors_name;
	std::string account_number;
	double acc_balance;
public:
	Account(std::string name, std::string number, double balance = 0);
	void show_data();
	void deposit(double amount);
	int withdraw(double amount);
};

Account::Account(std::string name, std::string number, double balance)
{
	depositors_name = name;
	account_number = number;
	acc_balance = balance;
}

void Account::show_data()
{
	std::cout << depositors_name << std::endl << account_number << std::endl << acc_balance <<
		std::endl;

}

void Account::deposit(double amount)
{
	acc_balance += amount;
}

int Account::withdraw(double amount)
{
	if (amount > acc_balance)
		return 1;

	acc_balance -= amount;
	return 0;
}

int main()
{
	std::string name = "John Stevens";
	std::string number = "003492348728472894";
	Account ac = Account(name, number);
	ac.show_data();
	ac.deposit(325.24);
	ac.show_data();
	if (ac.withdraw(2522))
		std::cout << "Doesn't have enough money\n";

	return 0;
}

