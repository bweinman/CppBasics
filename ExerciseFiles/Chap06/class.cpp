// class.cpp by Bill Weinman <http://bw.org/>
// updated 2022-06-01
#include <format>
#include <iostream>

using std::format;
using std::cout;

// a very simple class
class C1 {
    int c1val {};
public:
    void setvalue(int value) { c1val = value; }
    int getvalue() { return c1val; }
};

int main() {
    C1 o1;
    o1.setvalue(47);
    cout << format("value is {}\n", o1.getvalue());
}
