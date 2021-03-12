#include <iostream> 
#include <vector>
#include <sstream>


using namespace std;

struct TokenFreq
{//start struct
	string token;
	int freq;
};//end struct


int main()
{//start main
	string text ="",istr;
	vector<TokenFreq> list;
	TokenFreq tf;
	cin >> istr;
	stringstream stream(istr);
	while (stream >> text)
	{
		for (auto& key : text)
		{//makes temp lower case
			key = tolower(key);
			
		}
		
	}

}//end main