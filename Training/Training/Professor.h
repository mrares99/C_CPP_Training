#ifndef PROFESSOR_
#define PROFESSOR_

#include <string>
#include "Person.h"

class Professor : public Person {
private:
	std::string fieldOfStudy;
public:
	Professor(std::string identifier, std::string name, int age,
		std::string fieldOfStudy);
	void set_field_of_study(const std::string fieldOfStudy);
	std::string get_field_of_study();
	void print_information();
};

#endif