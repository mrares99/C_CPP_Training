#include <iostream>
#include <fstream>
#include <string>
#include "Operations.h"


int main()
{
	std::string username = "";
	std::string password = "";
	bool checkUsername = false;
	bool checkPassword = false;
	std::ifstream inputFile;

	username = read_username();
	password = read_password();

	inputFile.open("LoginCredentials.txt");
	if (!inputFile.is_open()) {
		std::cout << "File not opened of the file does not exist!";
		exit(EXIT_FAILURE);
	}

	checkUsername = check_if_username_exists(inputFile, username);
	checkPassword = check_if_password_exists(inputFile, password);

	if (checkPassword == true && checkUsername == true) {
		std::cout << "Login successfull";
	}

	return 0;
}