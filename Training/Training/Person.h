#ifndef PERSON_
#define PERSON_

#include <string>

template<typename T>
class Person {
private:
	std::string name;
	int age;
	T templateField;
public:
	Person();
	Person(std::string name, int age, T templateField);
	Person(Person& person);
	void setName(std::string name);
	void setAge(int age);
	void setTemplateField(T templateField);
	std::string getName();
	int getAge();
	T getTemplateField();
	void printFields();
};

#endif