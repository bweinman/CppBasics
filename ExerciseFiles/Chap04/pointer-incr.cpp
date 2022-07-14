// pointer-incr.cpp by Bill Weinman <http://bw.org/>
// updated 2020-07-03
#include <format>
#include <iostream>
#include <cstdint>

using std::format;
using std::cout;

using int_type = int32_t;

void printp(const int_type* p) {
    cout << format("pointer: {}, value: {}\n", static_cast<const void*>(p), *p);
}

int main() {
    int_type arr[] { 1, 2, 3, 4, 5 };
    int_type* p = arr;
    cout << format("size is {} byte(s)\n", sizeof(*p));
    printp(p++);
    printp(p++);
    printp(p++);
    printp(p++);
}
