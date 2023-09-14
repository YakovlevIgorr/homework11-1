//
// Created by Macbook on 14.09.2023.
//
#include <iostream>
#include "library_house/library.h"
int main() {
    Greeter greeter;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << greeter.greet(name);
    return 0;
}