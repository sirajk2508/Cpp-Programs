// ENCAPSULATION Example

#include <iostream>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
    int odo_meter_reading;

public:
    Car(string make, string model, int year) : make(make), model(model), year(year), odo_meter_reading(0) {}

    int getOdoMeterReading() {
        return odo_meter_reading;
    }

    void drive(int miles) {
        odo_meter_reading += miles;
    }

    void getCarDetails() {
        cout << "Brand: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "OdoMeter Reading: " << getOdoMeterReading() << " miles" << endl;
    }
};

int main()
{
    Car my_car("Toyota", "Corolla", 2002);
    my_car.drive(100);
    my_car.getCarDetails();
    return 0;
}