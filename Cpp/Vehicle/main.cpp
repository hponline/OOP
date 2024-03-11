#include <iostream>
#include <string>

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

    virtual void start()
    {
        std::cout << "Vehicle has been started. " << std::endl;
    }

    virtual void stop()
    {
        std::cout << "Vehicle has been stoped. " << std::endl;
    }

    virtual void drive()
    {
        std::cout << "Vehicle is being driven. " << std::endl;
    }

    virtual string toString()
    {
        return manufacturer + " - " + std::to_string(year) + " - " + color;
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

    void drive() override
    {
        std::cout << "The Car manufacturer by " << this->manufacturer << " is being driven." <<std::endl;
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

    void drive() override
    {
        std::cout << "The Bus manufacturer by " <<this->manufacturer<<" is being driven." <<std::endl;
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

    void drive() override
    {
        std::cout<<"The SchoolBus manufacturer by " << this->manufacturer <<" is being driven."<<std::endl;
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

    void drive() override
    {
        std::cout<<"The Truck manufacturer by " <<this->manufacturer<<" is being driven."<<std::endl;
    }
};

int main()
{
    Vehicle item2 = Vehicle("BMW",2022,"SkyBlue");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;

    Car item1 = Car();
    item1.setManufacturer("Mercedes");
    item1.setYear(2015);
    item1.setColor("Black");
    std::cout << "Vehicle " << item1.toString() << std::endl;
    item1.openSunroof();
    
    Car item3 = Car ("Opel",2019,"Purple");
    std::cout << "Vehicle " << item3.toString() << std::endl;
    item3.openSunroof();

    Bus item4 = Bus ("Isuzu",2007,"Gray");
    std::cout << "Vehicle " << item4.toString() << std::endl;
    item4.scheduling();

    SchoolBus item5 = SchoolBus ("Okul Tasiti",2005,"Mavi");
    std::cout << "Vehicle " << item5.toString() << std::endl;
    item5.getFare();
    item5.scheduling();

    Truck item6 = Truck ("Kamyon",2004,"Kirmizi");
    std::cout << "Vehicle " << item6.toString() << std::endl;
    item6.transport();


    item1.drive();
    item1.stop();


    item3.drive();
    item3.stop();


    item4.drive();
    item4.stop();

    item5.drive();
    item5.stop();

    item6.drive();
    item6.stop();

    
    char c = getchar();
    return 0;
}