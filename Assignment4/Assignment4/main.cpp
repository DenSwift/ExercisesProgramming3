#include <iostream>
#include "String.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    String str1 = String("Hello World!");
    cout << "Address of str1: " << &str1 << endl;
    cout << "Original string: ";
    str1.print();

    String str2 = String(str1);
    cout << "Address of str2: " << &str2 << endl;
    cout << "Copied string: ";
    str2.print();
    
    cout << "Original string after modification: ";
    str1.setChar('A', 4);
    str1.print();
    
    cout << "Copied string: ";
    str2.print();
    
    return 0;
}
