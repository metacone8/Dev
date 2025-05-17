// ProjectA/main.cpp
#include <iostream>
#include "lib.h"

int main() {
    std::cout << "Hello from ProjectA!" << std::endl;
    greet();  // ProjectB에서 제공하는 greet 함수 호출
    return 0;
}