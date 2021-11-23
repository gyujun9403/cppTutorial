#include "gyeon.h"
using namespace gyeon;

int main() {
    TestClass tc;
    tc.setVar1(42);
    std::cout << tc.getVar1() << std::endl;
    return 0;
}