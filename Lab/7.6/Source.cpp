#include <iostream> 
#include <vector>

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
ostream& operator<<(ostream& os, const TokenFreq& o1);



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