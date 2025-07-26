#include <cstdint>

namespace sample_dll
{
    class Adder
    {
    public:
        static void add(uint32_t a, uint32_t b, uint32_t* result);
    };
}
