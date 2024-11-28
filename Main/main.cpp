//
//  main.cpp
//  Task1
//
//  Created by Денис  on 24.10.2024.
//


// main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include "Stock.hpp"
using namespace std;


int main() {
    ifstream iFile;
    string line = "";
    
    iFile.open("Lager.csv");
        
       getline(iFile, line);
       getline(iFile, line);
    
    cout << line << endl;
    cout << "Hello World!" << endl;
    
    return 0;
}
