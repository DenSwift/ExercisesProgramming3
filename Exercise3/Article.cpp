//
//  Article.cpp
//  Task1
//
//  Created by Денис  on 12.11.2024.
//

#include "Article.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

//// Чтение данных артикула из строки
//std::istream& Article::read(std::istream& is) {
//    std::string line;
//    if (std::getline(is, line)) {
//        std::stringstream ss(line);
//        std::string temp;
//        
//        std::getline(ss, temp, ';');
//        articleNumber = std::stoi(temp);  // Артикул
//        
//        std::getline(ss, description, ';');  // Описание
//        
//        std::getline(ss, temp, ';');
//        costPrice = std::stod(temp);  // Закупочная цена
//        
//        std::getline(ss, temp, ';');  // Пропускаем actualStock
//        std::getline(ss, temp, ';');  // Пропускаем maximumStock
//        std::getline(ss, temp, ';');  // Пропускаем consumption
//        
//        std::getline(ss, temp, ';');
//        orderDuration = std::stoi(temp);  // Время поставки
//    }
//    return is;
//    
//}
//
//
//// Запись данных артикула
//std::ostream& Article::write(std::ostream& os) const {
//    os << articleNumber << ";" << description << ";" << costPrice << ";" << orderDuration;
//    return os;
//}



