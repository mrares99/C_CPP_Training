#ifndef SUBJECT_
#define SUBJECT_

#include <string>
#include <vector>

class Subject {
private:
	std::string name;
	std::vector<int> grades;
public:
	explicit Subject(std::string name);
	void add_grade(const int grade);
	std::string get_name();
	std::vector<int> get_grades();
	double find_average_of_grades();
	void print_information();
};

#endif