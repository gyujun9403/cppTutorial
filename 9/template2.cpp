#include <iostream>

template<typename T>	// 이거 밑에 오는 클래스는 Test3<T>일때 호출
class Test1 {
	public:
	Test1() {
		std::cout << "<typename T>" << std::endl;
	}
};

class Test2 {
	//T* t; -> 식별자 "T"이(가) 정의되어 있지 않습니다.C/C++(20)
	// 탬플릿 변수를 사용할때마다 template<...>로 명시해줘야 한다.
};

template<typename T1, typename T2>	// 이거 밑에 오는 클래스는 Test3<T1, T2>일때 호출
class Test3 {
	public:
	Test3() {
		std::cout << "<typename T1, typename T2>" << std::endl;
	}	
};

template<typename T1>	// 이거 밑에 오는 클래스는 Test3<T1, [...]>일때 호출
class Test3<T1, int> {	// Test3<T1, int>로 한정 -> 탬플릿 특수화
	public:
	Test3() {
		std::cout << "<typename T1, int>" << std::endl;
	}	
};

template<typename T1, typename T2>	// 이거 밑에 오는 클래스는 Test3<T1, T2>일때 호출
class Test3<T1,T2*> {
	public:
	Test3() {
		std::cout << "<typename T1, typename T2*>" << std::endl;
	}	
};

/* template<typename T1>	// 이거 밑에 오는 클래스는 Test3<T1, [...]>일때 호출
** class Test3<T1> { <- 클래스 템플릿 "Test3"에 대한 인수가 너무 적습니다.C/C++(442)
** 	public:
** 	Test3() {
** 		std::cout << "<typename T1, typename T2*>" << std::endl;
** 	}	
** };
*/

int main() {
	Test1<int> t1;
	Test3<int, int> t3;
	Test3<int, char> t3_1;
	Test3<int, int*> t3_2;
}