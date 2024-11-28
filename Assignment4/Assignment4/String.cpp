#include "String.hpp"
#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

// A constructor to create a String from a C-string.
String::String(const char* cstr) { // If an array of characters is passed it's automatically converted to a pointer to its first element
    if(cstr) { // check if the input C-string is not null
        charptr = new char[strlen(cstr)]; // allocate memory
        strcpy(charptr, cstr); // copy the content of the input C-string to the allocated memory
    } else {
        charptr = nullptr;
    }
}
// A copy constructor to create a deep copy of a String object.
String::String(const String& dstring) {
    if(dstring.charptr) { // check if the source String's charptr is not null
        charptr = new char[strlen(dstring.charptr)]; // allocate memory
        strcpy(charptr, dstring.charptr); // copy the content from the source String's charptr into the newly allocated memory
    } else {
        charptr = nullptr; // if the source String's charptr is null, set this object's charptr to null as well
    }
}

// Destructor to release memory
String::~String() {
    delete[] charptr; // release dynamically allocated memory
}

// A method to set a character at a specific index.
void String::setChar(char c, int i) {
    if(i < 0 || i > strlen(charptr)) { // checking if the index is out of bounds
        cout << "Index out of bounds" << endl;
        return;
    } else {
        charptr[i] = c; // set the new char at i index
    }
}

// Method to print the string
void String::print() const {
    if(charptr) {
        cout << charptr << endl;
    } else {
        cout << "Empty string" << endl;
    }
}
