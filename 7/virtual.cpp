#include <iostream>

class base {
	public :
		virtual void base_func() {
			std::cout << "base" << std::endl;
		}
};

class derived : public base {
	public :
		void base_func() {
			std::cout << "derived" << std::endl;
		}
};


int main() {
	base bs;
	derived dr;
	
	bs.base_func();
	dr.base_func();

	base *p_bs1 = &bs;
	base *p_bs2 = &dr;
	std::cout << "base포인터에 base의 주소\n> ";
	p_bs1->base_func();	//> base
	std::cout << "base포인터에 derived의 주소\n> ";
	p_bs2->base_func(); //> derived
}