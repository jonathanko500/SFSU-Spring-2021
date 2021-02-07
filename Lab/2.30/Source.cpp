#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
    float wCal, mCal;
    float age, weight, heart, time;
    float cTime;
    float wAge, wWeight, wHeart;
    float mAge, mWeight, mHeart;

    cin >> age;
    cin >> weight;
    cin >> heart;
    cin >> time;

    cTime = time / 4.184;

    wAge = age * 0.074;
    wWeight = weight * 0.05741;
    wHeart = (heart * 0.4472);

    //Women: Calories = ( (Age x 0.074) — (Weight x 0.05741) + (Heart Rate x 0.4472) — 20.4022 ) x Time / 4.184
    wCal = (wAge - wWeight + wHeart - 20.4022) * cTime;


    mAge = age * 0.2017;
    mWeight = weight * 0.09036;
    mHeart = (heart * 0.6309);

    //Men: Calories = ( (Age x 0.2017) + (Weight x 0.09036) + (Heart Rate x 0.6309) — 55.0969 ) x Time / 4.184
    mCal = (mAge + mWeight + mHeart - 55.0969) * cTime;

    cout << "Women: ";
    cout << fixed << setprecision(2) << wCal;
    cout << " calories" << endl;

    cout << "Men: ";
    cout << fixed << setprecision(2) << mCal;
    cout << " calories" << endl;

    return 0;
}
