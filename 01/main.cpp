// pre-processor directives
#include <iostream>
#include <typeinfo>


int main() {

    // type inference with auto keyword 
    auto e = 3.14f;
    auto f = 3.14;
    auto g = 'd';
    auto h = "c++ rocks!";
    auto i = true;

    // typeid is implementation dependent
    std::cout << "The type of e: " << typeid(e).name() << std::endl;
    std::cout << "The type of f: " << typeid(f).name() << std::endl;
    std::cout << "The type of g: " << typeid(g).name() << std::endl;
    std::cout << "The type of h: " << typeid(h).name() << std::endl;
    std::cout << "The type of i: " << typeid(i).name() << std::endl;

    std::cout << "---" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}