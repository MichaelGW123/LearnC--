#include "Sample.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!" << '\n';

    Sample test;

    std::cout << "N is : " << test.GetN() << std::endl;

    test.SetN(42);

    std::cout << "N is : " << test.GetN() << std::endl;
}