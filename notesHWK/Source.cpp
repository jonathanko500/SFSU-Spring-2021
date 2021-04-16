#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <vector>
using namespace std;


class Airplane {
public:
    Airplane();
    void AddPassengers(int passengers);
    int GetAvailableSeats() const;
private:
    int totalSeats;
    int passengers;
};

Airplane::Airplane() {
    totalSeats = 350;
    passengers = 0;
}

void Airplane::AddPassengers(int passengers) {
    this->passengers = this->passengers + passengers;
}

int Airplane::GetAvailableSeats() const {
    return totalSeats - passengers;
}

int main() {
    Airplane airbus330;

    airbus330.AddPassengers(1);
    airbus330.AddPassengers(8);

    cout << airbus330.GetAvailableSeats() << " seats" << endl;

    return 0;
}