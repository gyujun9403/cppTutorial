#include <iostream>

class TestClass {
    private:
        const int var1;
        bool var2;
    public:
        TestClass(int var1, bool var2);
        int getVar1() {return var1;};
        bool getVar2() {return var2;};
};

TestClass::TestClass(int var1, bool var2) : var1(var1), var2(var2) {}

// TestClass::TestClass(int var1, bool var2) {
//     this->var1 = var1;
//     this->var2 = var2;
// }

int main() {
    TestClass tc(42, true);
    std::cout<< tc.getVar1() << ", " << tc.getVar2();
}