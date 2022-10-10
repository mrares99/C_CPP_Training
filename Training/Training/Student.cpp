#include "Student.h"
#include <string>
#include <iostream>


Student::Student(std::string identifier, std::string name, int age, std::string rollNo,
			Subject subject) : Person(identifier, name, age), rollNo{ rollNo }, 
			subject{ subject } 
{ }

void Student::print_information() {
	Person::print_information();
	std::cout << "RollNo=" << rollNo;
	subject.print_information();
}

std::string Student::get_roll_no() {
	return rollNo;
}

Subject Student::get_subject() {
	return subject;
}