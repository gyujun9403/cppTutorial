#include <iostream>
#include <string.h>
using std::string;

class TestClass {
    public:
        // 포인터 출력을 위해 일부러
        int var1;
        char *var2;
        int get_var1(){return var1;};
        void set_var1(int var1);
        char * get_var2(){return var2;};
        void set_var2(char *var2);
        TestClass(int var1, const char *var2) {
            this->var1 = var1;
            this->var2 = new char[strlen(var2) + 1];
            strcpy(this->var2, var2);
        }

};

int main() {
    string str("gyeon");
    TestClass *tc = new TestClass(42, str.c_str());
    // 디폴트 복사 생성자 이용
    TestClass *tc2 = tc;
    std::cout << tc2->get_var2() << "\t: " << tc2->get_var1() << std::endl;
    std::cout << (int *)(tc->var2) << " , " << (int *)(tc2->var2) << std::endl;
    return 0;
} 