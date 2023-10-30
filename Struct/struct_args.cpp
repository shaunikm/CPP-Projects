#include <iostream>
using namespace std;

struct Car {
    string model;
    int year;
    string color;
};

void printCar(Car &car) { // reference to original struct, without &, it would create a copy
    cout << &car << endl;
    printf("Model: %s\nYear: %i\nColor: %s\n", car.model.c_str(), car.year, car.color.c_str());
}

void paintCar(Car &car, string color) {
    car.color = color;
}

int main() {
    Car car1;
    Car car2;

    car1.model = "Toyota";
    car1.year = 2001;
    car1.color = "gray";

    car2.model = "Tesla";
    car2.year = 2017;
    car2.color = "black";

    paintCar(car1, "silver");

    printCar(car1);
    printCar(car2);

    return 0;
}