#include <iostream>
#include <string>
#include <memory>
#include <vector>


#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "Subject.h"




int main()
{
	Subject math{ "Math" };
	math.add_grade(5);
	math.add_grade(9);
	math.add_grade(7);


	Subject romanian{ "Romanian" };
	romanian.add_grade(9);
	romanian.add_grade(7);
	romanian.add_grade(10);

	Student andrei{ "identifier1", "Andrei", 24, "rollNo1", math };
	Student claudiu{ "identifier2", "Claudiu", 64, "rollNo2", romanian };
	Professor professor1{ "identifier3", "Bogdan", 35, "Informatics" };
	
	Person* person1 = &andrei;
	Person* person2 = &claudiu;
	Person* person3 = &professor1;
	
	person1->print_information();
	std::cout << std::endl;
	person2->print_information();
	std::cout << std::endl;
	person3->print_information();
	std::cout << std::endl;

	return 0;
}