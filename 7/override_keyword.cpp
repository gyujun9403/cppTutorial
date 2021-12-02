#include <iostream>
class Base {
	public :
	virtual void func1(int a) {
		std::cout << a << std::endl;
	}
};

class derived : public Base {
	public :
	//void func1(int a) const override {
	//> 'override'로 선언된 멤버 함수는 기본 클래스 멤버를 재정의하지 않습니다.C/C++(1455)
	void func1(int a) override {
		std::cout << a + 42 << std::endl;
	}
};

int main() {
	derived dr;
	Base *p_bs = &dr;

	dr.func1(3);
	p_bs->func1(3);
}