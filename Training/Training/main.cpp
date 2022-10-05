#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>
#include "Operations.h"


int main()
{
	std::string username = "";
	std::string password = "";
	bool isLogin = false;
	std::ifstream inputFile;
	std::ofstream outputFile;

	username = read_username();
	password = read_password();

	inputFile.open("LoginCredentials.txt");
	if (!inputFile.is_open()) {
		std::cout << "File not opened of the file does not exist!";
		exit(EXIT_FAILURE);
	}

	isLogin = verify_credentials(inputFile, username, password);

	if (isLogin == true) {
		std::cout << "Login successfull";
		outputFile.open("HistoryOfLogging.txt", std::ios_base::app);
		
		auto start = std::chrono::system_clock::now();
		auto legacyStart = std::chrono::system_clock::to_time_t(start);
		//std::cout << std::ctime(&legacyStart) << '\n';
		char buff[100];
		ctime_s(buff, 100, &legacyStart);
		outputFile << username << " logged at " << buff << std::endl;
		outputFile.close();
	}



	inputFile.close();
	return 0;
}