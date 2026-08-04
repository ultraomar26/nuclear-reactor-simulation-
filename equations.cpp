#include <iostream>
#include <cmath>

double prop_of_fission_in_spicfic_mass(double n, double prop_of_fission){ 
 
    return n * prop_of_fission;
}

int main(){ 
    double input_n = 0.0;
    double input_prop_of_fission = 0.0;

    std::cout << "Enter the number of neutrons (n): ";
    std::cin >> input_n;

    std::cout << "Enter the proportion of fission (prop_of_fission): ";
    std::cin >> input_prop_of_fission;

    double total_prop_of_fission = prop_of_fission_in_spicfic_mass(input_n, input_prop_of_fission);
    std::cout << "The proportion of fission in the specific mass is: " << total_prop_of_fission ;

}

