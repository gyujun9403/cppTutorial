#ifndef GYEON_H
# define GYEON_H

#include <iostream>

namespace gyeon {
    class TestClass {
    // 접근지시지 생략하면 priavate. 
    private :
        int var1;
    public :
        void setVar1(int var1);
        int getVar1();
    };
}

#endif