#include "CashRegisters.h"
#include <chrono>
#include <thread>
#include <iostream>


CashRegisters::CashRegisters(std::string identifier) : identifier{ identifier } {
	int numberOfCustomers = 0;
	std::vector<Customer> customers(numberOfCustomers);
	int totalDurationInWhichItWorked = 0;
	int totalAmountOfMoneyEarned = 0;
	int timeNeddedToSatisfyAllCustomers = 0;
}

void CashRegisters::operator()(Customer customer) {
	addCustomer(customer);
	std::cout << "customer added:" << customer.getIdentifier() << std::endl;
	updateNumberOfCustomers(getNumberOfCustomers() + 1);
	updateDurationInWhichItWorked(getTotalDurationInWhichItWorked() + customer.getDuration());
	updateAmountOfMoneyEarned(getTotalAmountOfMoneyEarned() + customer.getValueOfBasket());
	updateTimeNeddedToSatisfyAllCustomers(customer.getDuration());
	std::chrono::duration<int, std::milli> timespan(1);
	std::this_thread::sleep_for(timespan*customer.getDuration());
	removeCustomer(customer);
	std::cout << "customer removed" << std::endl;
}

void CashRegisters::removeCustomer(Customer customer) {
	std::vector<Customer>::iterator it = customers.begin();
	for (std::vector<Customer>::iterator it = customers.begin();
				it != customers.end(); ++it) {
		if (customer.getIdentifier().compare(customers.at(std::distance(customers.begin(), it)).getIdentifier())) {
			customers.erase(it);
		}
	}
}

void CashRegisters::updateNumberOfCustomers(int numberOfCustomers) {
	this->numberOfCustomers = numberOfCustomers;
}

void CashRegisters::addCustomer(Customer customer) {
	customers.push_back(customer);
}

void CashRegisters::updateDurationInWhichItWorked(int duration) {
	totalDurationInWhichItWorked += duration;
}

void CashRegisters::updateAmountOfMoneyEarned(int moneyEarned) {
	totalAmountOfMoneyEarned += moneyEarned;
}

void CashRegisters::updateTimeNeddedToSatisfyAllCustomers(int duration) {
	timeNeddedToSatisfyAllCustomers += duration;
}

std::string CashRegisters::getIdentifier() {
	return identifier;
}

int CashRegisters::getNumberOfCustomers() {
	return numberOfCustomers;
}

std::vector<Customer> CashRegisters::getCustomers() {
	return customers;
}

int CashRegisters::getTotalDurationInWhichItWorked() {
	return totalDurationInWhichItWorked;
}

int CashRegisters::getTotalAmountOfMoneyEarned() {
	return totalAmountOfMoneyEarned;
}

int CashRegisters::getTimeNeddedToSatisfyAllCustomers() {
	return timeNeddedToSatisfyAllCustomers;
}




