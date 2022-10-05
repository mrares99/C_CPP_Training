#ifndef CUSTOMERS_
#define CUSTOMERS_
#include <string>

class Customer {
private:
	std::string identifier;
	int duration;
	int valueOfBasket;
public:
	Customer();
	Customer(std::string identifier, int duration, int valueOfBasket);
	void setDuration(int duration);
	void setValueOfBasket(int valueOfBasket);
	void setIdentifier(std::string identifier);
	std::string getIdentifier();
	int getDuration();
	int getValueOfBasket();
};

#endif 