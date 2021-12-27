//
// Created by 연규준 on 2021/12/24.
//

#include <iostream>
#include <vector>

using std::string;

int main() {
	string word;
	std::vector<string> vec_words;

	while (std::cin >> word) {
		vec_words.push_back(word);
	}
	if (vec_words.empty()) {
		std::cout << "입력된 문자가 없습니다.";
		return 1;
	}
	typedef std::vector<string>::size_type vec_leng;
	vec_leng leng = vec_words.size();
	vec_leng i = 0, j, cnt;
	std::vector<bool> flg(leng, false);
	while (i < leng) {
		cnt = 0;
		j = i;
		if (!flg[i]) {
			while (j < leng) {
				if (vec_words[i].compare(vec_words[j]) == 0 && !flg[j]) {
					++cnt;
					flg[j] = true;
				}
				++j;
			}
			std::cout << vec_words[i] << ": " << cnt << "\n";
		}
		++i;
	}
	return 1;
}