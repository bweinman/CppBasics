// qualifiers.cpp by Bill Weinman [bw.org]
// updated 2022-06-16
#include <iostream>
#include <format>

using std::cout;
using std::format;

int func() {
    int x {7};
    return ++x;
}

int main() {
    int i {42};
    cout << format("The integer is {}\n", i);
}
