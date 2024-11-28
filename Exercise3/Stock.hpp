//
//  Stock.hpp
//  Task1
//
//  Created by Денис  on 12.11.2024.
//

#ifndef Stock_hpp
#define Stock_hpp

#include <stdio.h>
#include <iostream>
#include "Article.hpp"

class Stock {
private:
    int articleNumber;
    int actualStock;
    int maximumStock;
    int consumption;

public:
    double getTotalStockValue(const Article& article) const;
    int calculateReorderPoint(int orderDuration) const;
    int calculateOrderProposal(int reorderPoint) const;

    std::istream& read(std::istream& is);
    friend std::ostream& operator<<(std::ostream& os, const Stock& stock);
};

#endif

