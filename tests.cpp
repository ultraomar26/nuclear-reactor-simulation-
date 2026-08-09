#include <iostream>
    
class nuclear_reactor{
    public:
    double tempruture;
    double pressure;
    double fuel;
    std::string fuel_type;
    std::string reactor_type;

};

int main(){
    nuclear_reactor reactor1;
    reactor1.tempruture = 300.0;
    reactor1.pressure = 150.0;
    reactor1.fuel = 100.0;
    reactor1.fuel_type = "Uranium";
    reactor1.reactor_type = "BWR";

    std::cout << "Reactor Type: " << reactor1.reactor_type << std::endl;
    std::cout << "Fuel Type: " << reactor1.fuel_type << std::endl;
    return 0;
};