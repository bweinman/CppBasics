// func.cpp by Bill Weinman [bw.org]
// updated 2022-07-10
#include <format>
#include <iostream>

using std::format;
using std::cout;

void func() {
     cout << "this is func()\n";
}

int main() {
    cout << "this is main()\n";
    func();
}
