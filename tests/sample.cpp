#include <iostream>
#include "free_function.hpp"
#include "class_function.hpp"

int main()
{
    uint32_t adder;
    sample_dll::free_add(10, 20, &adder);
    std::cout << adder << std::endl;

    uint32_t adder2;
    sample_dll::Adder::add(25, 35, &adder2);
    std::cout << adder2 << std::endl;
    return 0;
}