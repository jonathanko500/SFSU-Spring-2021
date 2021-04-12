#ifndef CAB_H
#define CAB_H

#include <string>
#include <vector>

using namespace std;

class CabRides
{
public:
    //travel distances ride
    //float
    vector <string> distance;

    //prices of service
    //float
    vector <string> price;

    //time stamp of each ride 
    //int
    vector <string> time_stamp;

    //specific product purchased
    vector <string> product_name;

    //uber vs lyft
    vector <string> cab_type;

    //every other uneeded data pt
    vector <string> misc;
    //function to insert data from csv file 

    void vectorDataInsert();
    void getDistance();
};

#endif