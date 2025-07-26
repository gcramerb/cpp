#include "class_function.hpp"

void sample_dll::Adder::add(uint32_t a, uint32_t b, uint32_t* result)
{
    *result = a + b;
}
