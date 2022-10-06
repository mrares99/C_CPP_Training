#include "Person.h"
#include <iostream>

template<typename T>
Person<T>::Person() {
	std::cout << "Default constructor called ";
	this->name = "Default";
	this->age = 0;
}

template<typename T>
Person<T>::Person(std::string name, int age, T templateField) :
			name{name}, age{age}, templateField{templateField}
{}

template<typename T>
Person<T>::Person(Person& person) {
	name = person.name;
	age = person.age;
	templateField = person.templateField;
}

template<typename T>
void Person<T>::setName(std::string name) {
	this->name = name;
}

template<typename T>
void Person<T>::setAge(int age) {
	this->age = age;
}

template<typename T>
void Person<T>::setTemplateField(T templateField) {
	this->templateField = templateField;
}

template<typename T>
std::string Person<T>::getName() {
	return this->name;
}

template<typename T>
int Person<T>::getAge() {
	return this->age;
}

template<typename T>
T Person<T>::getTemplateField() {
	return this->templateField;
}


template<typename T>
void Person<T>::printFields() {
	std::cout << "Name=" << name << "   Age=" << age <<
		"   Template field=" << templateField << std::endl;
}
