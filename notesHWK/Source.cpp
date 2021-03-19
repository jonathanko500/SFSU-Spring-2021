#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <vector>
using namespace std;

class Pet {
public:
    Pet(string petName = "NoName", int yearsOld = -9999);
    void Print();

private:
    string name;
    int age;
};

Pet::Pet(string petName, int yearsOld) {
    name = petName;
    age = yearsOld;
}

void Pet::Print() {
    cout << name << ", " << age << endl;
}

int main() {
    Pet dog;
    Pet cat("Cleo");
    Pet bird("Kiwi", 6);

    cat.Print();
    dog.Print();
    bird.Print();

    return 0;
}

