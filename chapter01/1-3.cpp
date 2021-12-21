//
// Created by 연규준 on 2021/12/19.
//

#include <iostream>
#include <string>

int main () {
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	}
	{
		const std::string s = "another string";
		std::cout << s << std::endl;
	}
	return 0;
}