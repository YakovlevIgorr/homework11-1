//
// Created by Macbook on 14.09.2023.
//
#include <iostream>
#include "library_house/library.h"
#include "dinamic_lab/din_library.h"
int main() {
    Greeter greeter;
    Leaver leaver;
    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << greeter.greet(name) << "\n";
    std::cout << leaver.leave(name);
    return 0;
}