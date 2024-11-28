#ifndef String_hpp
#define String_hpp

#include <stdio.h>
#include <iostream>

class String {
private:
    char *charptr; // A private character pointer to manage the dynamic character array
public:
    // A constructor to create a String from a C-string.
    String(const char* cstr);
    
    // A copy constructor to create a deep copy of a String object.
    String(const String& dstring);
    
    // A method to set a character at a specific index.
    void setChar(char c, int i);
    
    // Destructor to release memory
    ~String();
    
    // Method to print the string
    void print() const;
};

#endif
