// vector.cpp by Bill Weinman [bw.org]
// updated 2022-07-12
#include <format>
#include <iostream>
#include <string>
#include <vector>

using std::format;
using std::cout;
using std::vector;

int main() {
    cout << "vector from initializer list:\n";
    vector<int> vi1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    cout << format("size: {}\n", vi1.size());
    cout << format("front: {}\n", vi1.front());
    cout << format("back: {}\n", vi1.back());
    cout << '\n';
    
    cout << format("element 5: {}\n", vi1[5]);
    cout << format("element 5: {}\n", vi1.at(5));
    
    // iterator
    cout << "iterator:\n";
    auto itbegin = vi1.begin();
    auto itend = vi1.end();
    for (auto it = itbegin; it < itend; ++it) {
        cout << format("{} ", *it);
    }
    cout << '\n';

    cout << "range-based for loop:\n";
    for (const auto& i : vi1) {
        cout << format("{} ", i);
    }
    cout << "\n\n";

    cout << "insert 42 at begin + 5:\n";
    vi1.insert(vi1.begin() + 5, 42);
    cout << format("size: {}\n", vi1.size());
    cout << format("element 5: {}\n", vi1.at(5));

    cout << "erase at begin + 5:\n";
    vi1.erase(vi1.begin() + 5);
    cout << format("size: {}\n", vi1.size());
    cout << format("element 5: {}\n", vi1.at(5));

    cout << "push_back 47:\n";
    vi1.push_back(47);
    cout << format("size: {}\n", vi1.size());
    cout << format("vi1.back(): {}\n", vi1.back());
    cout << '\n';

    // from C-array
    const size_t size {10};
    int ia[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "vector from C-array:\n";
    vector<int> vi2(ia, ia + size);
    for (const auto& i : vi2) {
        cout << format("{} ", i);
    }
    cout << "\n\n";

    // vector of strings
    cout << "vector of strings:" << std::endl;
    vector<std::string> vs {"one", "two", "three", "four", "five"};
    for (const auto& v : vs) {
        cout << format("{}\n", v);
    }
}
