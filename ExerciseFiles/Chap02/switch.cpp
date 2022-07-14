// switch.cpp by Bill Weinman [bw.org]
// updated 2022-07-11
#include <iostream>

using std::cout;

int main() {
    const int one {1};
    const int two {2};
    const int three {3};
    const int four {4};
    
    int condition {3};
    
    switch (condition) {
        case one:
            cout << "one\n";
            break;
        case two:
            cout << "two\n";
            break;
        case three:
            cout << "three\n";
            break;
        case four:
            cout << "four\n";
            break;
        default:
            cout << "default\n";
            break;
    }
}
