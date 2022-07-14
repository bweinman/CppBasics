// array.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };
    for(const int& i : array) {
        cout << format("{} ", i);
    }
    cout << '\n';
}
