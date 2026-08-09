#include <iostream>
#include <string>
#include <vector>
#include<cmath>

class ReactorCore {
    public:
    double temperature;
    double pressure;
    int control_rod_level;
    bool is_emergency;

    void update_status(double temp, double pres, int rod_level, bool emergency) {
        temperature = temp;
        pressure = pres;
        control_rod_level = rod_level;
        is_emergency = emergency;

        std::cout << "update the temperature: ";
        std::cin >> temperature;

        std::cout << "update the pressure: ";
        std::cin >> pressure;
    };

    void check_safety() {
        if (temperature > 800.0 || pressure > 200.0) {
            is_emergency = true;
            std::cout << "CRITICAL MELTDOWN WARNING!" << std::endl;
        } else {
            is_emergency = false;
            std::cout << "STATUS: NORMAL" << std::endl;
        }
    };

    void display_status() {
        std::cout << "Temperature: " << temperature << " °C" << std::endl;
        std::cout << "Pressure: " << pressure << " atm" << std::endl;
        std::cout << "Control Rod Level: " << control_rod_level << "%" << std::endl;
        std::cout << "Emergency Status: " << (is_emergency ? "YES" : "NO") << std::endl;
    };
};