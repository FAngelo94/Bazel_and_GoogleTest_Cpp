#include <iostream>
#include "src/lib/Greeting.h"

int main()
{
    Greeting *greet = new Greeting();

    std::cout << "START" << std::endl;
    std::cout << "START 2" << std::endl;
    std::cout << greet->getGreetingMessage() << std::endl;
    std::cout << "END" << std::endl;
    return EXIT_SUCCESS;
}
