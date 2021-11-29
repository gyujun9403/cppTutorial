#include <iostream>
class BaseClass {
	std::string s;

	public :
	BaseClass() : s("Base") {
		std::cout << "Base con called" << std::endl;
	} ;
	void prt_s1() {
		std::cout << "s1 : " << s << std::endl;
	}
};

class DerivedClass : public BaseClass {
	std::string s2;

	public :
	DerivedClass() : s2("Derived") {
		std::cout << "Derived con called" << std::endl;
	}
	void prt_s2() {
		// std::cout << "s : " << s << std::endl;
		std::cout << "s2 : " << s2 << std::endl;
	}
};

int main () {
	BaseClass bs;
	DerivedClass dc;

	bs.prt_s1();
	dc.prt_s1();
	dc.prt_s2();
	return 0;
}