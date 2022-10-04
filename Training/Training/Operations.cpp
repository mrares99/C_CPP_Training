#include "Operations.h"
#include <iostream>


std::string read_username() {
	std::string username = "";
	std::cout << "Username: ";
	do {
		getline(std::cin, username);
		if (username.length() > 20) {
			std::cout << "Username too long. Please try again. Username: ";
			continue;
		}
	} while (username.length() > 20);
	return username;
}

std::string read_password() {
	std::string password = "";
	std::cout << "Password: ";
	do {
		getline(std::cin, password);
		if (password.size() > 20) {
			std::cout << "Password too long. Please try again. Password: ";
		}
	} while (password.size() > 20);
	return password;
}


std::string get_username(std::string& input) {
	if (input == "") {
		std::cout << "Empty string";
		exit(EXIT_FAILURE);
	}
	int endIndex = 0;
	while (input.at(endIndex) != ' ') {
		++endIndex;
	}
	return input.substr(0, endIndex);
}

std::string get_password(std::string& input) {
	int startIndex = input.length() - 1, endIndex = 0;
	while (input.at(startIndex) != ' ') {
		--startIndex;
	}
	return input.substr(startIndex + 1, input.length());
}

bool check_if_username_exists(std::ifstream &inputFile, std::string username) {
	std::string line = "";
	while (getline(inputFile, line)) {
		if (get_username(line).compare(username) == 0) {
			return true;
		}
	}
	return false;
}

bool check_if_password_exists(std::ifstream &inputFile, std::string password) {
	std::string line = "";
	while (getline(inputFile, line)) {
		if (get_password(line).compare(password) == 0) {
			return true;
		}
	}
	return false;
}



