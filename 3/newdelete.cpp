#include <iostream>

int &make_new(int num) {
    int *result = new int (num);
    int &rt = *result;
    return rt;
}


int main () {
    int result;
    result = make_new(42);
    std::cout << result << std::endl;
    result = 4242;
    std::cout << result << std::endl;
    delete &result;
    return 0;
}