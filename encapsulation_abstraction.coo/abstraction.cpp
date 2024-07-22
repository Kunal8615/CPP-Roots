#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:

    Car(){};
    Car(string carBrand, string carModel, int carYear) {
        brand = carBrand;
        model = carModel;
        year = carYear +1000;
    }

    void displayCarInfo() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};


int main(){
    Car a;
    //amodel ="kunal";
    a.displayCarInfo();
    Car dod("tata","xuv2",2005);
    dod.displayCarInfo();
}