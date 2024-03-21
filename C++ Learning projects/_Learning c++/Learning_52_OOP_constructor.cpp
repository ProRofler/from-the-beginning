#include <iostream>

/*
Object - a set of members and methods
It can contain a set of variables (members) as well as a set of functions(methods)
Looks kinda like structure but more anvanced
It represents a blueprint of an object
class - the keyword to creating objects

Below is the typical order of class members:

private - accessible only within the same class where they are declared
protected - similar to private, but they're also accessible from the inherited classes
public - members that are accessible from outside of an object

*/

class Workstation
{
    private:

    std::string LicenseKey = "No license";
    int id = 0;

    public:

    int CpuCores;
    std::string OperatingSystem;
    double Teraflops;
    bool IsOn = false;

    /*
    Constructor - basically a preset of parameters
    it allows us to assign a values to the variables right away instead of going one by one in the main function
    looks like a return type function
    */
   
    Workstation(){} // overloaded constructor - based on the amount of arguments, the corresponding constructor will be chosen
    Workstation(int CpuCores, std::string OperatingSystem, double tf) // constructor must have the same name as the object
    {
        this -> CpuCores = CpuCores; // in case when we have the same names for the input datatypes - we have to use "this->" setup
        this -> OperatingSystem = OperatingSystem;
        Teraflops = tf; // "this ->" setup is not required in case of using differrent names for variables
    }
    Workstation(int CpuCores, std::string OperatingSystem, double Teraflops, bool IsOn) // constructor must have the same name as the object
    {
        this -> CpuCores = CpuCores;
        this -> OperatingSystem = OperatingSystem;
        this -> Teraflops = Teraflops; 
        this -> IsOn = IsOn;
    }
    
    ~Workstation()
    {
        std::cout << "The destructor has been called" << std::endl;
    }; // destructor, called upon destroy of an object (going out of scope). Can't be overloaded. One per class(object)

    //Getter and setter - used to read and write into private members
    std::string getLicenseKey()
    {
        return LicenseKey;
    }
    int getId()
    {
        return id;
    }
    void setLicenceKey(const std::string &LicenceKey)
    {
        this -> LicenseKey = LicenceKey;
    }
    
    friend int SetId(Workstation &val, int id); // friend functions have access to a private members even when outside of a scope

    void IsRunning()
    {
        switch (Workstation::IsOn)
        {
        case 1:
            std::cout << "This workstation is running\n";
            break;
        
        default:
            std::cout << "This workstation is offline\n";
            break;
        }    
    }
    void ShowConfig(const int &CpuCores, const std::string &OperatingSystem, const double &Teraflops)
    {
        std::cout << "Available CPU cores - " << CpuCores << '\n';
        std::cout << "Operating system - "  << OperatingSystem << '\n';
        std::cout << "Teraflops count -  - " << Teraflops << '\n';
        std::cout <<"\n*********\n";
    }   
    void ShowLicense()
    {
    std::cout << "The license key is: " << Workstation::LicenseKey <<'\n';
    }
    void ShowLicense(const std::string &LicenceKey) // here we can set an additional checks if needed, like a regular function
    {
    std::cout << "The license key is: " << LicenceKey <<'\n';
    }
    void ShowId() // here we can set an additional checks if needed, like a regular function
    {
    std::cout << "The machine id is: " << id <<'\n';
    }

};

// this class is inherited from Workstation class, it has all the methods and members from the parent class but can contain an additional ones
// can be inherited not as public but as private and protected also
class ServerWorkstation : public Workstation 
{
    public:
    std::string IpAdress;
    double Bandwidth;

    ServerWorkstation(const std::string &IpAdress, const double &Bandwith)
    {
        this -> IpAdress = IpAdress;
        this -> Bandwidth = Bandwith;
    };

    void ServerInfo()
    {
        std::cout   << "IP adress: " << ServerWorkstation::IpAdress << '\n'
                    << "Bandwith: " << ServerWorkstation::Bandwidth << '\n'
                    <<"\n*********\n";
    }
};

void NewFunction(Workstation &PC_2, std::string &License); // I don't remember what the fuck is this and why I did it

int main()
{
    Workstation PC_1; // not using the constructor

    PC_1.CpuCores = 64;
    PC_1.OperatingSystem = "Windois";
    PC_1.Teraflops = 8964.25f;
    PC_1.IsOn = false;
    std::cout << PC_1.getLicenseKey() << '\n';

    PC_1.IsRunning();
    PC_1.ShowConfig(PC_1.CpuCores, PC_1.OperatingSystem, PC_1.Teraflops);

    PC_1.~Workstation(); // explicity calling the destructor

    Workstation PC_2(32, "Linus", 4328.25f); //assigning the variables via the constructor
    PC_2.IsOn = true;
    std::string License = "IT'S FREEEEEE";
    NewFunction(PC_2, License);

    PC_2.IsRunning();
    PC_2.ShowConfig(PC_2.CpuCores, PC_2.OperatingSystem, PC_2.Teraflops);

    Workstation PC_3(1, "BolgenOS", 15.25f, false); //assigning the variables via the constructor

    PC_3.setLicenceKey("PopovLicense_20421441");

    SetId(PC_3, 25);
    PC_3.ShowLicense();
    PC_3.ShowId();
    PC_3.IsRunning();
    PC_3.ShowConfig(PC_3.CpuCores, PC_3.OperatingSystem, PC_3.Teraflops);

    ServerWorkstation Server_1("24.15.25.25", 1064.25f);

    Server_1.ServerInfo();
   
    return 0;
}

void NewFunction(Workstation &PC_2, std::string &License)
{
    PC_2.ShowLicense(License); //for whatever reason this function calls the function inside class
}

int SetId(Workstation &val, int id)
{
    val.id = id;
    return val.id;
}