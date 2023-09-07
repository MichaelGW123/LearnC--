#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double height {0}; 
    double flength {0};
    double ilength {0};
    double angle {0};
    const double inches_per_foot {12.0};
    const double pi {3.141592653589793238};
    const double pi_degrees {180.0};
    std::cout << "Enter height in inches: ";
    std::cin >> height;
    height /= inches_per_foot;
    std::cout << "\nEnter distance in feet and inches: ";
    std::cin >> flength >> ilength;
    const double distance {flength + ilength / inches_per_foot};
    std::cout << "\nEnter angle between horizon and top of tree: ";
    std::cin >> angle;
    angle *= pi/pi_degrees;

    const double tree {height + distance * std::tan(angle)}; 
    
    std::cout << "Height of the tree: " << tree << std::endl;
}