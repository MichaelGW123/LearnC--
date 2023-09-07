#include <iostream>

int main(){
    double height {0};
    double weight {0};
    std::cout << "Please enter your weight (in pounds): ";
    std::cin >> weight;
    weight /=2.205;
    std::cout << "Please enter your height (in feet): ";
    std::cin >> height;
    height *= 0.3048;
    double bmi {weight/(height*height)};
    std::cout << "Your BMI is " << bmi << std::endl;
}