//
//  User.hpp
//  Task1
//
//  Created by Денис  on 24.10.2024.
//

#ifndef User_hpp
#define User_hpp

#include <stdio.h>
#include <iostream>

class User {
    
private:
    std::string name;
    int age;
    
public:
    // Constructor
    User(const std::string& userName, int userAge);
    
    // Getter
    std::string getName() const;
    int getAge() const;
    
    // Setter
    void setName(const std::string& userName);
    void setAge(int userAge);
    
    void displayInfo() const;
    
};

#endif /* User_hpp */
