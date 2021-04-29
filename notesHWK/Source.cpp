#pragma warning(disable:4996)//disable warning sign for cstrings
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <vector>

using namespace std;

class AnimalData {
public:
    void SetName(string givenName) {
        fullName = givenName;
    };
    void SetAge(int numYears) {
        ageYears = numYears;
    };
    // Other parts omitted

    void PrintAll() {
        cout << "Name: " << fullName;
        cout << ", Age: " << ageYears;
    };

private:
    int    ageYears;
    string fullName;
};

class PetData : public AnimalData {
public:
    void SetID(int petID) {
        idNum = petID;
    };

    // FIXME: Add PrintAll() member function

    /* Your solution goes here  */
    void PrintAll() {
        AnimalData::PrintAll();
        cout << ", ID: " << idNum;
    };

private:
    int idNum;
};

int main() {
    PetData userPet;
    string userName;
    int userAge;
    int userID;

    cin >> userName;
    cin >> userAge;
    cin >> userID;

    userPet.SetName(userName);
    userPet.SetAge(userAge);
    userPet.SetID(userID);
    userPet.PrintAll();
    cout << endl;

    return 0;
}