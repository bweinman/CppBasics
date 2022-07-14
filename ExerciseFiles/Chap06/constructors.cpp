// constructors.cpp by Bill Weinman [bw.org]
// updated 2022-06-18
#include <format>
#include <iostream>
#include <string>

using std::format;
using std::cout;
using std::string;

const string unk {"unknown"};
const string clone_prefix {"clone-"};

// -- interface --
class Animal {
    string a_type {};
    string a_name {};
    string a_sound {};
public:
    Animal();   // default constructor
    Animal(const string& type, const string& name, const string& sound);
    Animal(const Animal&);  // copy constructor
    ~Animal();  // destructor
    Animal& operator = (const Animal&);   // copy/assignment operator
    void print() const;
};

// -- implementation --
Animal::Animal() : a_type(unk), a_name(unk), a_sound(unk) {
    cout << "default constructor\n";
}

Animal::Animal(const string& type, const string& name, const string& sound)
: a_type(type), a_name(name), a_sound(sound) {
    cout << "constructor with arguments\n";
}

Animal::Animal(const Animal& a) {
    cout << "copy constructor\n";
    a_name = clone_prefix + a.a_name;
    a_type = a.a_type;
    a_sound = a.a_sound;
}

Animal::~Animal() {
    cout << format("destructor: {} the {}\n", a_name, a_type);
}

Animal& Animal::operator = (const Animal& o) {
    cout << "assignment operator\n";
    if(this != &o) {
        a_name = clone_prefix + o.a_name;
        a_type = o.a_type;
        a_sound = o.a_sound;
    }
    return *this;
}

void Animal::print () const {
    cout << format("{} the {} says {}\n", a_name, a_type, a_sound);
}

int main() {
    Animal a {};
    a.print();
    
    const Animal b("goat", "bob", "baah");
    b.print();
    
    const Animal c = b;
    c.print();
    
    a = c;
    a.print();
    
    cout << "end of main\n";
    return 0;
}
