#include <iostream>

class TestClass {
    private:
        // 멤버 변수
        int var1;
    
    public:
        // 생성자
        TestClass() = default;
        TestClass(int var1);
        // 소멸자
        ~TestClass();
        // 멤버 함수
        void setVar1(int var1);
        int getVar1();
};

TestClass::TestClass() {
    var1 = 42;
}

TestClass::TestClass(int var1) {
    this->var1 = var1;
}

TestClass::TestClass() {
    // 그냥 소멸자 보여줄라고 만들어봄..
    ;
}

void TestClass::setVar1(int var1) {
    this->var1 = var1;
}

int TestClass::getVar1() {
    return this->var1;
}