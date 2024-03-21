#include <iostream>

/*
Structs can be passed to functions, first you need to declare the name of the struct and then the variable
IT can be passed by refence using the adress-of operator &
*/




struct PcConfig
{
    std::string Cpu;
    int Memory;
    std::string Gpu;
    bool Wifi;
};

void PrintConfig(PcConfig Config); //passed by value, so in this case the copy is created. More expensive
void WifiSwitch (PcConfig &Config); //passed by refence so we're modifying the original variable instead of copying it

int main()
{
    PcConfig Config_1;

    Config_1.Cpu = "Ryzen 9 9800X";
    Config_1.Memory = 64;
    Config_1.Gpu = "ASUS RTX 4070ti";
    Config_1.Wifi = false;


    PcConfig Config_2;

    Config_2.Cpu = "Celeron 1mhz";
    Config_2.Memory = 4;
    Config_2.Gpu = "GT 420";
    Config_2.Wifi = false;




    std::cout << &Config_1 << '\n';
    WifiSwitch(Config_1);
    PrintConfig(Config_1);
    PrintConfig(Config_2);




    return 0;
}




void PrintConfig(PcConfig Config)
{
    std::cout << &Config << '\n';
    std::cout << Config.Cpu << '\n';
    std::cout << Config.Memory << '\n';
    std::cout << Config.Gpu << '\n';
    std::cout << Config.Wifi << '\n';

}

void WifiSwitch (PcConfig &Config)
{
    std::cout << &Config << '\n';
    Config.Wifi = !Config.Wifi;
}