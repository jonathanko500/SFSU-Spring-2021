#pragma warning(disable:4996)//disable warning sign for cstrings
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <vector>



using namespace std;

class FoodOrder {
public:
    FoodOrder(string foodType);
    static int GetNextId();
private:
    string type = "None";
    int id = 0;
    static int nextId;
};

FoodOrder::FoodOrder(string foodType) {
    type = foodType;
    id = nextId;

    nextId += 1;
}

int FoodOrder::GetNextId() {
    return nextId;
}

int FoodOrder::nextId = 50;

int main() {
    FoodOrder order1("Sushi");
    FoodOrder order2("Salad");
    FoodOrder order3("Muffins");

    cout << "Next ID: " << FoodOrder::GetNextId() << endl;

    return 0;
}