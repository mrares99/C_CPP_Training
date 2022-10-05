#include "Customers.h"

Customer::Customer(std::string identifier, int duration, int valueOfBasket) :
		identifier{identifier}, duration{duration}, valueOfBasket{valueOfBasket}
		{}

Customer::Customer() {}

void Customer::setDuration(int duration) {
	this->duration = duration;
}

void Customer::setValueOfBasket(int valueOfBasket) {
	this->valueOfBasket = valueOfBasket;
}

void Customer::setIdentifier(std::string identifier) {
	this->identifier = identifier;
}

std::string Customer::getIdentifier() {
	return identifier;
}

int Customer::getDuration() {
	return duration;
}

int Customer::getValueOfBasket() {
	return valueOfBasket;
}