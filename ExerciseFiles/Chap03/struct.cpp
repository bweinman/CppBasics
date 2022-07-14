// struct.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <format>
#include <iostream>

using std::format;
using std::cout;

struct S {
    int i {};
    double d {};
    const char * s {};
};

int main() {
    S s1 { 3, 47.9, "string one" };
    cout << format("s1: {}, {}, {}\n", s1.i, s1.d, s1.s);
}
