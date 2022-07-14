// references.cpp by Bill Weinman [bw.org]
// updated 2022-07-02
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int x {7};
    int* ip = &x;
    int& y = x;

    cout << format("The value of x is {}\n", x);
    cout << format("The value of *ip is {}\n", *ip);
    cout << format("The value of y is {}\n", y);
}
