#include <iostream>
#include "Greeting.h"

std::string Greeting::getGreetingMessage() {
    std::cout << "getGreetingMessage 1"<< std::endl;
    std::cout << "getGreetingMessage 2"<< std::endl;
    return "Hello World!";
}