//
//  Stock.cpp
//  Task1
//
//  Created by Денис  on 12.11.2024.
//

#include "Stock.hpp"
#include <iostream>
#include <sstream>
#include "Article.hpp"

//// Чтение данных о складе из строки
//std::istream& Stock::read(std::istream& is) {
//    std::string line;
//    if (std::getline(is, line)) {
//        std::stringstream ss(line);
//        std::string temp;
//        
//        std::getline(ss, temp, ';');
//        articleNumber = std::stoi(temp);  // Номер артикула
//        
//        std::getline(ss, temp, ';');  // Пропускаем описание
//        std::getline(ss, temp, ';');  // Пропускаем закупочную цену
//        
//        std::getline(ss, temp, ';');
//        actualStock = std::stoi(temp);  // Фактический запас
//        
//        std::getline(ss, temp, ';');
//        maximumStock = std::stoi(temp);  // Максимальный запас
//        
//        std::getline(ss, temp, ';');
//        consumption = std::stoi(temp);  // Потребление
//        
//        std::getline(ss, temp, ';');  // Пропускаем дополнительные данные
//    }
//    return is;
//}
//
//std::ostream& Stock::write(std::ostream& os, int reorderPoint, int orderProposal) const {
//    os << articleNumber << ";" << actualStock << ";"
//       << maximumStock << ";" << consumption << ";"
//       << reorderPoint << ";" << orderProposal;
//    return os;
//}

