// iostream-file.cpp by Bill Weinman [bw.org]
// updated 2022-06-21
#include <iostream>
#include <fstream>

int main() {
    static int lineno {};
    static const char * filename {"/Users/billw/test.txt"};
    static const char * textstring {"This is the test file"};
    
    // write a file
    std::cout << "write the file:\n";
    std::ofstream ofile(filename);
    ofile << ++lineno << " " << textstring << '\n';
    ofile << ++lineno << " " << textstring << '\n';
    ofile << ++lineno << " " << textstring << '\n';
    ofile.close();
    
    // read a file
    static char buf[128];
    std::cout << "read the file:\n";
    std::ifstream infile(filename);
    while (infile.good()) {
        infile.getline(buf, sizeof(buf));
        std::cout << buf << '\n';
    }
    infile.close();
    
    // delete file
    std::cout << "delete file.\n";
    remove(filename);
}
