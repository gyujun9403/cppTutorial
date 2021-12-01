#include <iostream>

class TestClass {
    int var1;
    mutable int var2;
    public :
        TestClass(int var1, int var2);
        int getVar1() const;
};

TestClass::TestClass(int var1, int var2) {
    this->var1 = var1;
    this->var2 = var2;
}

int TestClass::getVar1() const {
    // this->var1 = 42;
    // 식이 수정할 수 있는 lvalue여야 합니다.C/C++(137)
    this->var2 = 42;
    // var2은 mutable이므로, 수정 가능
    return this->var1;
}