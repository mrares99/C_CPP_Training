#include <iostream>
#include <string>
#include <memory>

#include "Person.h"
#include "Person.cpp" //I know it is wrong, but without doing this, I have a linker issue

int main()
{
	std::unique_ptr<Person<int>> person(nullptr);
	person = std::make_unique<Person<int>>(new Person<int>{});
	person->printFields();
	person.reset(); //free the memory

	std::unique_ptr<Person<int>> person2 = std::make_unique<Person<int>>(new Person<int>{});
	person2->printFields();

	std::shared_ptr<Person<int>> person3(nullptr);
	person3 = std::make_shared<Person<int>>(new Person<int>{});
	person3->printFields();

	std::shared_ptr<Person<int>> person4(nullptr);
	person4 = person3; // Increment counter references
	std::shared_ptr<Person<int>> person5(nullptr);
	person5 = person4;
	
	std::weak_ptr<Person<int>> person5(person3);

	return 0;
}