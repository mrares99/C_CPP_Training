#include <iostream>
#include <string>

#include "Person.h"
#include "Person.cpp" //I know it is wrong, but without doing this, I have a linker issue

int main()
{
	Person<int> person1;
	person1.printFields();

	Person<double> person2{};
	person2.printFields();

	Person<std::string>* person3 = new Person<std::string>;
	person3->printFields();


	Person<int> person4{ "Andrei", 25, 5 };
	person4.printFields();

	Person<int>* person5 = new Person<int>{ "Calin", 29, 0 };
	person5->printFields();
	person5->setTemplateField(5);
	person5->printFields();

	Person<std::string> person6("Iulian", 340, "Iuli");
	person6.printFields();

	Person<std::string> *person7 = new Person<std::string>("Andras", 234, "Andreiut");
	person7->printFields();

	delete person3;
	delete person5;
	delete person7;

	return 0;
}