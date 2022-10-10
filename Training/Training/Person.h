#ifndef PERSON_
#define PERSON_

#include <string>

class Person {
private:
	std::string identifier;
	std::string name;
	int age;
public:
	Person(std::string identifier, std::string name, int age);
	void set_identifier(const std::string identifier);
	void set_name(const std::string name);
	void set_age(const int age);
	std::string get_identifier();
	std::string get_name();
	int get_age();
	virtual void print_information();
};

#endif