#include <iostream>

class Test {
	public :
	template <typename T>
	void test_func1(T t1, T t2) {
		std::cout << t1 << ", " << t2 << std::endl;
	}
	template <typename T, int t2>
	void test_func2(T t1) {
		std::cout << t1 << ", " << t2 << std::endl;
	}
};

int main() {
	Test t;
	// 탬플릿 인수(<...>)를 명시해야 했던 클래스와 달리,
	// 탬플릿 함수에서는 컴파일러가 자동으로 변환을 해준다.
	// t.test_func1(4, 2); -> t.test_func1<int>(4, 2);
	t.test_func1(4, 2);
	t.test_func2<int, 2>(4);
}