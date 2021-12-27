//
// Created by 연규준 on 2021/12/24.
//

#include <iostream>
#include <vector>

using std::cin; using std::string;
using std::vector;

int main() {
	string str;
	vector<string> vec_strs;

	// white space단위가 아니라, 개행 단위로 문자를 입력받을때
	while (getline(cin, str)) {
		vec_strs.push_back(str);
	}
	if (vec_strs.empty()) {
		std::cout << "입력된 문자가 없습니다.";
		return 1;
	}
	string str_max;
	typedef string::size_type str_size;
	str_size max = 0, temp;
	for (vector<string>::iterator iter = vec_strs.begin(); iter != vec_strs.end(); iter++) {
		temp = iter->size();
		if (temp > max) {
			// iterator 내부의 데이터 사용시 포인터처럼 * 사용.
			str_max = *iter;
			max = temp;
		}
	}
	std::cout << "max string : " << str_max << std::endl;
	return 0;
}