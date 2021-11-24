#include <stdio.h>

void ref_func1(int &ref1) {
    ref1 = 3;
}

int main() {
    int a = 42;
    printf("a\t: %d [%p]\n", a, &a);
    ref_func1(a);
    printf("a\t: %d [%p]\n", a, &a);
    //&ref1 = &b; 
    // 식이 수정할 수 있는 lvalue여야 합니다.
    // int& ref2 = 4;
    // 비const 참조에 대한 초기 값은 lvalue여야 합니다.C/C++(461)
    // printf("ref1\t: %d [%p]\n", ref1, &ref1);
    // printf("a\t: %d [%p]\n", a, &a);
    // printf("b\t: %d [%p]\n", b, &b);
    // ref1 = 7;
    // printf("ref1\t: %d [%p]\n", ref1, &ref1);
    // printf("a\t: %d [%p]\n", a, &a);
    // printf("b\t: %d [%p]\n", b, &b);
}