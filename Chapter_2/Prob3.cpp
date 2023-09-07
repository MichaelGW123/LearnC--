#include <iostream>
#include <iomanip>

int main(){
    int length {0};
    std::cout << "Enter length in inches: ";
    std::cin >> length;
    int feet {0};
    int inches {0};
    feet = length/12;
    inches = length%12;
    std::cout << "Lenght in feet and inches is " << feet << "ft " << inches << "in." << std::endl;
}