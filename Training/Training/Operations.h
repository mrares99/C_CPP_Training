#ifndef OPERATIONS_
#define OPERATIONS_

#include <string>
#include <fstream>

std::string read_username();
std::string read_password();
std::string get_username(std::string& input);
std::string get_password(std::string& input);
bool check_if_username_exists(std::ifstream &inputFile, std::string username);
bool check_if_password_exists(std::ifstream &inputFile, std::string password);


#endif