#include "Subject.h"

#include <iterator>
#include <vector>
#include <iostream>

Subject::Subject(std::string name) : name{ name } {

}

void Subject::add_grade(const int grade) {
	grades.push_back(grade);
}

std::string Subject::get_name() {
	return name;
}

std::vector<int> Subject::get_grades() {
	return grades;
}


double Subject::find_average_of_grades() {
	double average = 0;
	for (std::vector<int>::iterator it = grades.begin(); it != grades.end(); ++it) {
		average += *it;
	}
	return (double)average / grades.size();
}

void Subject::print_information() {
	std::cout << " Subject=" << name << " Grades=";
	for(std::vector<int>::iterator it = grades.begin(); it != grades.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}