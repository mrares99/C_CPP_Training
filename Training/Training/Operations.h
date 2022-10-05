#ifndef OPERATIONS_
#define OPERATIONS_

#include <string>
#include <fstream>

std::string read_username();
std::string read_password();
std::string get_username(std::string& input);
std::string get_password(std::string& input);
bool verify_credentials(std::ifstream& inputfile, std::string username,
							std::string password);
bool check_if_username_exists(std::string line, std::string username);
bool check_if_password_exists(std::string line, std::string password);


#endif