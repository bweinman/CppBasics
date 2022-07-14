// auto-type.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;

int main() {
    std::string s {"This is a string"};
    auto x = s;
    cout << format("x is {}\n", x);
    cout << format("is x a std::string? {}\n", typeid(x) == typeid(std::string));
}
