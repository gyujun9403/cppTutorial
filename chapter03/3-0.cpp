//
// Created by 연규준 on 2021/12/23.
//

#include <algorithm>	// sort
#include <string>
#include <ios>			// streamsize
#include <iostream>
#include <iomanip>		// setprecision 정의
#include <vector>

using std::cin; using std::cout;
using std::sort; using std::endl;
using std::string; using std::setprecision;
using std::vector; using std::streamsize;

int main() {
	cout << "What is your name? : ";	// cin이 stream버퍼를 사용 -> 버퍼가 flush되어 출력됨.
	string name;
	cin >> name;

	cout << "Wirte your midtrem and final exam grades ex)88 100 : ";
	double mid, final;
	cin >> mid >> final;

	cout << "Wirte your homework grades, "
			"followd by EOF : ";	// 연속된 string들은 하나로 합쳐진다.
	vector<double> hw_grades;
	double hw_grade;
	// >>연산은 연속적인 연산을 위해 왼쪽의 피연산자를 반환한다.
	// 따라서 istream을 반환하는데, 이는 조건문에서는 false / true로 변환된다.
	// 변환될 때 istream은 객체내부의 값을 반영하므로, 입력받은게 없으면 false로 된다.
	while (cin >> hw_grade)
		hw_grades.push_back(hw_grade);

	// vector<double>::size_type형을 vec_size로 정의.
	// size_type : 벡터 및 컨테이너를 정의한 라이브러리에서 크기를 표현할때 쓰는 자료형. unsigned타입.
	typedef vector<double>::size_type vec_size;
	vec_size size = hw_grades.size();
	if (size == 0) {
		cout << "YOU DIDN'T WRITE GRADE!!!!!\n";
		return 1;
	}
	sort(hw_grades.begin(), hw_grades.end());
	double median;
	vec_size idx_mid = size / 2;
	median = (size % 2 == 0 ? (hw_grades[idx_mid] + hw_grades[idx_mid - 1])/2 : hw_grades[idx_mid]);

	// cout의 맴버함수 precision은 스트림이 부동소수점에서 사용하는 정밀도를 반환한다.
	// 인수가 없으면 정밀도를 바꾸지 않고, 있으면 그 값으로 정밀도를 변환한다(바뀌기 전의 값 반환).
	// streamsize : I/O 작업에서 전송된 문자 수 또는 I/O 버퍼의 크기를 나타내는 데 사용되는 부호 있는 정수 형식
	streamsize prec = cout.precision();
	// setprecision은 조작어이다. 이어서 발생하는 출력 스트림의 정밀도를 설정한다.
	cout <<  "Your grade is " << setprecision(3)
		<< 0.2 * mid + 0.4 * final + 0.4 * median
		// 출력이 끝나고 정밀도를 원래대로 되돌려놓는다.
		<< setprecision(prec) << endl;
	return 0;
}
