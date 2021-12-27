//
// Created by 연규준 on 2021/12/24.
//

#include <iostream>
#include <vector>

int main () {
	int element;
	std::vector<int> vec_int;
	std::vector<int>::size_type size;

	while (std::cin >> element) {
		vec_int.push_back(element);
	}
	size = vec_int.size();
	if (size <= 3)
		return 1;
	else
		std::cout << vec_int[size / 4];
	return 0;
}