//
//  Article.hpp
//  Task1
//
//  Created by Денис  on 12.11.2024.
//

#ifndef Article_hpp
#define Article_hpp

#include <iostream>
#include <string>

class Article {
public:
    int articleNumber;
    std::string description;
    double costPrice;
    int orderDuration;

    std::istream& read(std::istream& is);
    std::ostream& write(std::ostream& os) const;
};

#endif


