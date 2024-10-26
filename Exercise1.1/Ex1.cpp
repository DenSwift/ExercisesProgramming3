//
//  Ex1.cpp
//  Task1
//
//  Created by Денис  on 26.10.2024.
//

//#include <iostream>
//#include <cmath>
//#define SQUARESUM(a, b) ((a) * (a) + (b) * (b))
//
////// Function f(x) = e(-x^2)
////double f(double& x) {
////    return exp(-x * x);
////}
////
////// Rectangle method for numerical integration
////double integral(double a, double b, int n) {
////    double dx = (b - a) / n;  // width of each rectangle
////    double sum = 0.0;
////
////    for (int i = 0; i < n; ++i) {
////        double x = a + i * dx; // starting point of the subinterval
////        sum += f(x) * dx; // area of the current rectangle
////    }
////    return sum;
////}
////
////int main() {
////    double a = 0.0; // lower bound
////    double b = 1.0; // uppear bound
////    int n = 100; // number of rectangles
////
////    double result = integral(a, b, n);
////
////    std::cout << "Approximate integral from " << a << " to " << b << " is: " << result << std::endl;
////
////    return 0;
////}
//
//
//// Function for encrypting the text using the password
//std::string vigenereEncrypt(const std::string &text, const std::string &password) {
//    std::string encryptedText;
//  
//    for (int i = 0, j = 0; i < text.length(); i++) {
//        char textChar = text[i];
//  
//        // Skip spaces in original text
//        if (textChar == ' ') {
//            encryptedText += ' ';
//            continue;
//        }
//
//        // Calculate indexes for the text and password characters
//        int indexText = textChar - 'a'; // oiginal text is in lowercase
//        int indexPassword = password[j % password.length()] - 'A'; // password is in uppercase
//
//        // Calculate the encrypted character
//        char encryptedChar = 'A' + (indexText + indexPassword) % 26; // change to uppercase
//        encryptedText += encryptedChar;
//
//        j++;  // move to the next character of the password
//    }
//
//    return encryptedText;
//}
//
//
//int main(int argc, const char * argv[]) {
//    
//    std::string text, password, encrypted;
//
//        // Input original text
//        std::cout << "Enter the text to be encrypted (lowercase only): ";
//        std::getline(std::cin, text);
//
//        // Input password
//        std::cout << "Enter the password (uppercase only and without spaces): ";
//        std::getline(std::cin, password);
//
//        // Encrypt the text
//        encrypted = vigenereEncrypt(text, password);
//        std::cout << "Encrypted text: " << encrypted << std::endl;
////
//    return 0;
//}
//
//
//
////    int i1 = 3;
////    int i2 = 2;
////    std::cout << SQUARESUM(i1, i2) << std::endl; // 13
////    std::cout << SQUARESUM(2 + i1, i2) << std::endl; // 29
////    std::cout << SQUARESUM(i1, i2 + 1) << std::endl; // 18
////    std::cout << 3 * SQUARESUM(i1, i2) << std::endl; // 39
////

