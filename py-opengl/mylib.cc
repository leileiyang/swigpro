#include "mylib.h"
#include <iostream>

void bar(const Foo& f) {
    std::cout << &f << std::endl;
}
