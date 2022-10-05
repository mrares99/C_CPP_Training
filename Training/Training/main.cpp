#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>
#include "CashRegisters.h"
#include "Customers.h"
#include "RandomNumberGenerator.h"
#include <thread>



int main()
{
	std::vector<Customer> groupOfCustomers;
	int numberOfCustomers = 30;
	CashRegisters firstCashRegister{ "first" };
	CashRegisters secondCashRegister("second");
	for (int i = 0; i < numberOfCustomers; ++i) {
		;
		groupOfCustomers.push_back(Customer { std::to_string(i), randomNumberGenerator(0, 50),
			randomNumberGenerator(0, 20) });
	}
	
	numberOfCustomers--;

	while (numberOfCustomers > 1) {
		if (firstCashRegister.getTimeNeddedToSatisfyAllCustomers() <
			secondCashRegister.getTimeNeddedToSatisfyAllCustomers()) {
			std::thread th(firstCashRegister, groupOfCustomers.at(numberOfCustomers));
			th.join();
		}
		else {
			std::thread th(secondCashRegister, groupOfCustomers.at(numberOfCustomers));
			th.join();
		}
		

		numberOfCustomers--;
	}

	return 0;
}