// auto-type2.cpp by Bill Weinman [bw.org]
// updated 2022-05-25
#include <format>
#include <iostream>
#include <vector>

using std::format;
using std::cout;

int main() {
    std::vector<int> vi { 1, 2, 3, 4, 5 };
    for(std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it) {
        cout << format("int is {}\n", *it);
    }
}
