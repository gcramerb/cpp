#include "free_function.hpp"

void sample_dll::free_add(uint32_t a, uint32_t b, uint32_t* result)
{
    *result = a + b;
}