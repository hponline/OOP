#include <iostream>
using std::string;

class Vehicle
{
    // Kapsülleme
    // Private
protected:
    string manufacturer;
    int year;
    string color;

    // Public
public:
    string getManufacturer()
    {
        return this -> manufacturer;
    }

    void setManufacturer(string value)
    {
        this -> manufacturer = value; 
    } 

    int getYear()
    {
        return this -> year;
    }

    void setYear(int value)
    {
        this -> year = value;
    }

    string getColor()
    {
        return this -> color;
    }

    void setColor(string value)
    {
        this -> color = value;
    }

    Vehicle()
    {
        std::cout <<" \nAn Instance has been drived from Vehicle. " << std::endl;
    }

    Vehicle(string manufacturer, int year, string color) : Vehicle()
    {
        std::cout << "\nAn instance with full parameters has been derived from Vehicle." <<std::endl;
        this -> manufacturer = manufacturer;
        this -> year = year;
        this -> color = color;
    }

    void start()
    {
        std::cout << "Vehicle has been started" << std::endl;
    }

    void stop()
    {
        std::cout << "Vehicle has been stoped" << std::endl;
    }

    void drive()
    {
        std::cout << "Vehicle is driving" << std::endl;
    }


};

class Car : public Vehicle
{
public:
    Car()
    {
        std::cout <<" \nAn Instance has been drived from Car. " << std::endl;
    }

    Car(string manufacturer,int year,string color) : Vehicle(manufacturer,year,color)
    {
        std::cout << "\nAn instance with full parameters has been derived from Car." <<std::endl;
    }

    void openSunroof()
    {
        std::cout << "The Sunroof has been opened." << std::endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus(string manufacturer, int year, string color) : Vehicle(manufacturer, year, color)
    {
        std::cout<<"\nAn instance with full parameters has been derived from Bus Class. " <<std::endl; 
    }
    void scheduling()
    {
        std::cout << "Scheduled." << std::endl;
    }
};

class SchoolBus : public Bus
{
public:
    SchoolBus(string manufacturer, int year, string color) 
    : Bus(manufacturer,year,color)
    {
        std::cout << "\nAn instance with full parameters has been derived SchoolBus Class." <<std::endl;
    }
    void getFare()
    {
        std::cout << "getFare() has been called. " <<std::endl;
    }
};

class Truck : public Vehicle
{
public:
    Truck(string manufacturer, int year, string color) : Vehicle(manufacturer,year,color)
    {
        std::cout <<"\nAn instance with full parameters has been derived Truck class. " <<std::endl;
    }
    void transport()
    {
        std::cout <<"Transport() has been called. " <<std::endl;
    }
};

int main()
{
    Vehicle item2 = Vehicle("BMW",2022,"SkyBlue");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;

    Car item1 = Car();
    item1.setManufacturer("Mercedes");
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;
    item1.openSunroof();
    
    Car item3 = Car ("Opel",2019,"Purple");
    std::cout << "Vehicle " << item3.getManufacturer() << std::endl;
    item3.openSunroof();

    Bus item4 = Bus ("Isuzu",2007,"Gray");
    std::cout << "Vehicle " << item4.getManufacturer() << std::endl;
    item4.scheduling();

    SchoolBus item5 = SchoolBus ("Okul Tasiti",2005,"Sarı");
    std::cout << "Vehicle " << item5.getManufacturer() << std::endl;
    item5.getFare();
    item5.scheduling();

    Truck item6 = Truck ("Kamyon",2004,"Kırmızı");
    std::cout<<"Vehicle "<<item6.getManufacturer()<<std::endl;
    item6.transport();

    char c = getchar();
    return 0;
}