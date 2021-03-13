#include <iostream> 
#include <vector>
#include <sstream>

using namespace std;

struct TokenFreq
{//start struct
	string token;
	int freq;
};//end struct

//vector func
void matrixInit(vector< vector<int> >& matrix, int numRows, int numCols);

//struct func
bool operator<=(const TokenFreq& o1, const TokenFreq& o2);
const TokenFreq operator+ (const TokenFreq& o1, const TokenFreq o2);
ostream& operator<<(ostream& os, const TokenFreq& o1);
void getTokenFreqVec(string& istr, vector<TokenFreq>& tfVec);
void selectionSort(vector<TokenFreq>& tokFreqVector);
void insertionSort(vector<TokenFreq>& tokFreqVector);


int main()
{//start main

	
	//start test matrixInit
	int row, col;
	vector <vector<int> > list;
	cin >> row;
	cin >> col;
	
	matrixInit(list, row, col);
	cout << "Size of matrix is: " << row << "x" << col << endl;
	for (int i = 0; i < row; i++)
	{//start look through rows
		for (int j = 0; j < col; j++)
		{//start look through columns
			cout << "matrix[" << i << "] [" << j << "] = " << list[i][j] << endl;
		}//end look through columns
	}//end look through row

	//end test matrixInit
	


	//start TokenFreq tests
	TokenFreq obj1, obj2;

	//declare obj1
	cin >> obj1.freq;
	cin >> obj1.token;
	//declare obj2
	cin >> obj2.freq;
	cin >> obj2.token;

	
	//start <= test
	if (obj1 <= obj2)
	{
		cout << "1 <= 2";
	}
	else
	{
		cout << "1 > 2";
	}
	cout << endl;
	//end <= test
	

	
	//start test << 
	cout << obj1 << endl;
	cout << obj2 << endl;
	//end text <<
	


	//start test +
	TokenFreq obj3 = obj1 + obj2;
	cout << obj3 << endl;
	//end test + 



	//start getTokenFreqVec test
	vector<TokenFreq> key;
	string text;
	cin >> text;
	getTokenFreqVec(text, key);
	cout << key.size() << endl;
	for (int i = 0; i < key.size(); i++)
	{
		cout << i << " = (token = \"" << key.at(i).token << "\", freq = " << key.at(i).freq << ")" << endl;
	}
	//end getTokenFreqVec test
	

	//start selection sort test

	//declare vectors + struct
	vector<TokenFreq> sortS;

	
	TokenFreq one;
	one.token = "one";
	one.freq = 1;
	sortS.push_back(one);

	TokenFreq thirty;
	one.token = "thirty";
	one.freq = 30;
	sortS.push_back(thirty);

	TokenFreq k;
	one.token = "1k";
	one.freq = 1000;
	sortS.push_back(k);


	//start selection sort
	selectionSort(sortS);
	for (int i = 0; i < sortS.size(); i++)
	{
		cout << sortS.at(i).token << " and " << sortS.at(i).freq << endl;
	}
	//end selection sort


	//start insertion sort
	vector<TokenFreq> sortX;


	sortX.push_back(one);

	sortX.push_back(thirty);

	sortX.push_back(k);

	//start insertion sort
	insertionSort(sortX);
	for (int i = 0; i < sortX.size(); i++)
	{
		cout << sortX.at(i).token << " and " << sortX.at(i).freq << endl;
	}
	//end insertion sort
}//end main

void matrixInit(vector< vector<int> >& matrix, int numRows, int numCols)
{//start matrix maker
	matrix.resize(numRows, vector<int>(numCols));
	for (int i = 0; i < numRows; i++)
	{//start look through rows
		for (int j = 0; j < numCols; j++)
		{//start look through columns
			matrix[i][j] = i * j;
		}//end look through columns
	}//end look through row
}//end matrix maker

bool operator<=(const TokenFreq& o1, const TokenFreq& o2)
{//start <= overload
	if (o1.freq <= o2.freq)
	{
		return true;
	}
	else
	{
		return false;
	}
}//end <= overload

const TokenFreq operator+ (const TokenFreq& o1, const TokenFreq o2)
{//start overload +
	TokenFreq temp;
	temp.token = o1.token + " or " + o2.token;
	temp.freq = o1.freq + o2.freq;
	return temp;
}//end overload +

ostream& operator<<(ostream& os, const TokenFreq& o1)
{//start << overload
	os << o1.token << " " << o1.freq;
	return os;
}//end << overload

void getTokenFreqVec(string& istr, vector<TokenFreq>& tfVec)
{//start func
	stringstream stream(istr);//stream created to tell diff between string / num
	string temp = "";
	//string key;
	TokenFreq x;
	while (stream >> temp)
	{//start look through stream
		for (auto& key : temp)
		{//makes temp lower case
			key = tolower(key);
		}		
		
		bool loop = false;//prevents repeat temp
		for (auto& lock : tfVec)
		{//start compares + count to check # of freq of token
			if (lock.token == temp)
			{
				lock.freq++;
				loop = true;
			}
		}//end compare + count
		if (!loop)
		{//puts token and freq in vector
			x.token = temp;
			x.freq = 1;
			tfVec.push_back(x);
		}
	}///end look through stream
}//end func

void selectionSort(vector<TokenFreq>& tokFreqVector)
{//start selection sort
	int min;
	TokenFreq temp;
	for (int i = 0; i < tokFreqVector.size(); i++)
	{//start look through vector
		min = i;
		for (int j = i + 1; j < tokFreqVector.size(); j++)
		{//start compare
			if (tokFreqVector[j].freq < tokFreqVector[min].freq)
			{//compare to see if the i+1 < i
				min = j;
			}
		}//end compare
		if (min > i)
		{
			swap(tokFreqVector[i], tokFreqVector[min]);
		}
	}//end look through vector
}//end selection sort

void insertionSort(vector<TokenFreq>& tokFreqVector)
{//start insertion sort
	int hold;// element used to compare with other
	for (int i = 1; i < tokFreqVector.size(); i++)
	{//start look through vector
		hold = i;
		while (hold > 0 && tokFreqVector[hold].freq > tokFreqVector[hold - 1].freq)
		{//start compare + swap hold with previous elements 
			swap(tokFreqVector[hold-1],tokFreqVector[hold]);
			hold--;
		}//end compare + swap hold with previous element
	}//end look through vector
}//end insertion sort



