//
// Created by 연규준 on 2021/12/20.
//
#include <iostream>
#include <string>

int main() {
	{
		std::string s = "a string";
		{
			std::string x = "another string";
			std::cout << s << std::endl;
		}
		// std::cout << x << std::endl;
	}
	return 0;
}

