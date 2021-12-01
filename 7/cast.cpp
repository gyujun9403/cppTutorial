#include <iostream>

class baseClass {
    int var_base;

    public : 
        void whatIsThis() {
            std::cout << "baseCalss" << std::endl; 
        }
};

class derivedClass : public baseClass{
    int var1 = 3;
    public : 
        void whatIsThis() {
            std::cout << "derivedClass" << std::endl; 
        }
        void derivedFunc() {
            std::cout << var1 << std::endl;
        }
};


int main () {
    baseClass base_class;
    derivedClass derived_class;

    baseClass *b_p = &derived_class;
    b_p->whatIsThis();
    // derivedClass *d_p = &b_p;
    // "baseClass **" 형식의 값을 사용하여 "derivedClass *" 형식의 엔터티를 초기화할 수 없습니다.
    derivedClass *d_p = static_cast<derivedClass*>(&base_class);
    // derivedClass d_p = static_cast<derivedClass>(base_class); -> 에러 발생
    // 포인터만 cast할 수 있는 이유는 주소의 크기는 모두 동일하기 때문.
    d_p->whatIsThis();
    d_p->derivedFunc(); // 런타임 에러 발생

    // derivedClass *d_p2 = dynamic_cast<derivedClass*>(&baseClass);
    // 형식 이름을 사용할 수 없습니다.C/C++(254)
}