#include <iostream>
#include <iomanip>

int main(){
    double length {0};
    int precision {0};
    const double pi {3.141592653589793238};
    std::cout << "Enter the diameter of a circle: ";
    std::cin >> length;
    std::cout << "Please enter the desired precision of the output (significant figures): ";
    std::cin >> precision;
    std::cout << std::setprecision(precision);
    double area {(length/2)*(length/2)*pi};
    std::cout << "Area of circle is: " << area << std::endl;
}