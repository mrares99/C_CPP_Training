#ifndef CASH_REGISTERS_
#define CASH_REGISTERS_

#include <string>
#include <vector>

#include "Customers.h"

class CashRegisters {
private:
	std::string identifier;
	int numberOfCustomers;
	std::vector<Customer> customers;
	int totalDurationInWhichItWorked;
	int totalAmountOfMoneyEarned;
	int timeNeddedToSatisfyAllCustomers;
public:
	CashRegisters(std::string identifier);
	void operator()(Customer customer);
	void updateNumberOfCustomers(int numberOfCustomers);
	void addCustomer(Customer customer);
	void removeCustomer(Customer customer);
	void updateDurationInWhichItWorked(int duration);
	void updateAmountOfMoneyEarned(int moneyEarned);
	void updateTimeNeddedToSatisfyAllCustomers(int duration);
	std::string getIdentifier();
	int getNumberOfCustomers();
	std::vector<Customer> getCustomers();
	int getTotalDurationInWhichItWorked();
	int getTotalAmountOfMoneyEarned();
	int getTimeNeddedToSatisfyAllCustomers();
};

#endif