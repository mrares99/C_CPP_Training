#include "Person.h"

#include <string>
#include <iostream>

Person::Person(std::string identifier, std::string name, int age) :
				identifier{identifier}, name{name}, age{age}
{}

void Person::set_identifier(const std::string identifier) {
	this->identifier = identifier;
}

void Person::set_name(const std::string name) {
	this->name = name;
}

void Person::set_age(const int age) {
	this->age = age;
}

std::string Person::get_identifier() {
	return identifier;
}

std::string Person::get_name() {
	return name;
}

int Person::get_age() {
	return age;
}

void Person::print_information() {
	std::cout << "Identifier=" << identifier << " Name=" << name
		<< " Age=" << age << std::endl;
}

