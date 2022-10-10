#include "Professor.h"
#include "Person.h"
#include <string>
#include <iostream>

Professor::Professor(std::string identifier, std::string name, int age,
	std::string fieldOfStudy) : Person(identifier, name, age), 
				fieldOfStudy{fieldOfStudy} 
{}

void Professor::set_field_of_study(const std::string fieldOfStudy) {
	this->fieldOfStudy = fieldOfStudy;
}

std::string Professor::get_field_of_study() {
	return fieldOfStudy;
}

void Professor::print_information() {
	Person::print_information();
	std::cout << "Field of study=" << fieldOfStudy;
}