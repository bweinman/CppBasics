// struct-class.cpp by Bill Weinman [bw.org]
// updated 2022-06-02
#include <format>
#include <iostream>

using std::format;
using std::cout;

struct A {
    int ia {};
    int ib {};
    int ic {};
};

int main() {
    A o1 {47, 73, 103};
    cout << format("ia {}, ib {}, ic {}\n", o1.ia, o1.ib, o1.ic);
}
