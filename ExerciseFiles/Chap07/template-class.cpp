// template-class.cpp by Bill Weinman [bw.org]
// updated 2022-07-13
#include <format>
#include <iostream>
#include <memory>
#include <string>
#include <exception>

using std::format;
using std::cout;

// simple exception class
class S_err : public std::exception {
    const char * msg;
public:
    S_err() = delete;    // no default constructor
    explicit S_err(const char * s) noexcept : msg(s) { }
    const char * what() const noexcept { return msg; }
};

// simple fixed-size LIFO stack template
template <typename T>
class Stack {
    static const int default_size {10};
    static const int max_size {1000};
    int S_size {};
    int S_top {};
    std::unique_ptr<T[]> S_ptr {};
public:
    explicit Stack(int s = default_size);
    ~Stack() { if(S_ptr) S_ptr.release(); }
    T& push(const T&);
    T& pop();
    bool is_empty() const { return S_top < 0; }
    bool is_full() const { return S_top >= S_size - 1; }
    int top() const { return S_top; }
    int size() const { return S_size; }
};

// Stack<T> constructor
template<typename T>
Stack<T>::Stack(int s) {
    if (s > max_size || s < 1) throw S_err("invalid stack size");
    else S_size = s;
    S_ptr.reset(new T[S_size]);
    S_top = -1;
}

template<typename T>
T& Stack<T>::push( const T & i ) {
    if (is_full()) throw S_err("stack full");
    return S_ptr[++S_top] = i;
}

template<typename T>
T& Stack<T>::pop() {
    if (is_empty()) throw S_err("stack empty");
    return S_ptr[S_top--];
}

int main() {
    Stack<int> si {5};
    Stack<std::string> ss {5};

    try {
        cout << format("si size: {}\n", si.size());
        cout << format("si top: {}\n", si.top());
        
        for ( int i : { 1, 2, 3, 4, 5 } ) {
            si.push(i);
        }
        
        cout << format("si top after pushes: {}\n", si.top());
        cout << format("si is {}full\n", si.is_full() ? "" : "not ");
        
        while(!si.is_empty()) {
            cout << format("popped {}\n", si.pop());
        }

        cout << format("ss size: {}\n", ss.size());
        cout << format("ss top: {}\n", ss.top());

        for ( const char * s : {"one", "two", "three", "four", "five"} ) {
            ss.push(s);
        }

        cout << format("ss top after pushes: {}\n", ss.top());
        cout << format("ss is {}full\n", ss.is_full() ? "" : "not ");

        while(!ss.is_empty()) {
            cout << format("popped {}\n", ss.pop());
        }
    } catch (S_err & e) {
        std::cout << format("Stack error: {}\n", e.what());
        return 1;
    }
}
