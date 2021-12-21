//
// Created by 연규준 on 2021/12/20.
//

#include <iostream>
#include <string>
#include <unistd.h>

int main() {
	std::streambuf* outbuf = (std::cout << "what is your name? : ").rdbuf();
	std::string name;
	sleep(5);
	std::streambuf* inbuf = (std::cin >> name).rdbuf();
	outbuf = (std::cout << "Hello, " << name << " 1").rdbuf();
	sleep(5);
	std::cout << std::endl;
	std::cin >> name;
	std::cout << "Hello, " << name << " 2" << std::endl;

	return 0;
}