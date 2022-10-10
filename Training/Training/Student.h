#ifndef STUDENT_
#define STUDENT_

#include "Person.h"
#include "Subject.h"


class Student : public Person {
private:
	std::string rollNo;
	Subject subject;
public:
	Student(std::string identifier, std::string name, int age, std::string rollNo,
		 Subject subject);
	void print_information();
	std::string get_roll_no();
	Subject get_subject();
};

#endif