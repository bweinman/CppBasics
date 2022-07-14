// for.cpp by Bill Weinman [bw.org]
// updated 2022-07-03
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int array[] { 1, 2, 3, 4, 5 };

    for (auto i = 0; i < 5; ++i) {
        cout << format("element {} is {}\n", i, array[i]);
    }
}
