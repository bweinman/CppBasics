// working.cpp by Bill Weinman [bw.org]
// updated 2022-07-03
#include <format>
#include <iostream>

using std::format;
using std::cout;

int main() {
    int answer {42};
    cout << format("The answer is {}\n", answer);
}
