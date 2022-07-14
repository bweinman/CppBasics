// iostream-formatting.cpp by Bill Weinman [bw.org]
// updated 2022-07-12
#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::cin;
using std::string;

int main() {
    cout << "Hello, World!\n";

    string istr {};
    cout << "Prompt: ";
    cin >> istr;    // one word at a time
    cout << "Input: " << istr << '\n';

    char buf[128] {};
    cout << "Prompt: ";
    cin.getline(buf, sizeof(buf));
    cout << "Input: " << buf << '\n';

    // integer formatting
    int i1 {42};
    int i2 {127};
    int i3 {5555};
    cout << "default: " << i1 << ' ' << i2 << ' ' << i3 << '\n';
    cout << "hex: " << std::hex << i1 << ' ' << i2 << ' ' << i3 << '\n';
    cout << "hex with showbase: " << std::showbase << std::hex << i1 << ' ' << i2 << ' ' << i3 << '\n';
    cout << "octal with showbase: " << std::oct << i1 << ' ' << i2 << ' ' << i3 << '\n';
    cout << "default: " << std::noshowbase << std::dec << i1 << ' ' << i2 << ' ' << i3 << "\n\n";
    
    // floating point formatting options
    double d1 {3.1415926534};
    double d2 {1234.5};
    double d3 {4.2e-10};
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << '\n';
    cout << "fixed: " << std::fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << '\n';
    cout << "scientific: " << std::scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << '\n';
    cout << "set precision (3): " << std::setprecision(3) << std::fixed << d1 << ' ' << d2 << ' ' << d3 << ' ' << '\n';
    cout << "scientific (7): " << std::setprecision(7) << std::scientific << d1 << ' ' << d2 << ' ' << d3 << ' ' << '\n';
    cout.unsetf(std::ios_base::floatfield);
    cout << "default: " << d1 << ' ' << d2 << ' ' << d3 << ' ' << std::endl << '\n';
    
    // string formatting options
    string s1 {"This is a string."};
    string s2 {"This is a much longer string."};
    string s3 {"Today's news: Big Light in Sky Slated to Appear in East"};
    
    cout << s1 << '\n';
    cout << s2 << '\n';
    cout << s3 << '\n';
    
    cout << std::setw(64) << std::right << s1 << std::endl;
    cout << std::setw(64) << std::right << s2 << std::endl;
    cout << std::setw(64) << std::right << s3 << std::endl;
    
    cout << std::setfill('-') << std::setw(64) << std::right << s1 << std::endl;
    cout << std::setfill(' ') << std::setw(64) << std::right << s1 << std::endl;
    cout << std::left << s1 << std::endl;
}
