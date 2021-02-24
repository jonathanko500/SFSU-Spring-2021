#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(string x);
int GetNumOfWords(const string& x);
int FindText(string x, string target);
void ReplaceExclamation(string x);
void ShortenSpace(string x);
void PrintMenu(string x);




int main()
{//start main

	//reads/input text
	string text;
	cout << "Enter sample text: ";
	getline(cin, text);

	//display menu
	PrintMenu(text);

	return 0;
}//end main


//# !spaces char
int GetNumOfNonWSCharacters(string x)
{//start check for # !space char
	int count = 0;
	for (int i = 0; i < x.size(); i++)
	{//start look through string
		if (x[i] != ' ')
		{
			count++;
		}
	}//end look through

	return count;
}//end check for # !space char

//# words
int GetNumOfWords(const string& x)
{//start count of num words
	int count = 1;
	for (int i = 0; i < x.size(); i++)
	{//start look through string
		if (x[i] == ' ' && x[i - 1] != ' ')
		{
			count++;
		}
	}//end look through

	return count;
}//end count of num words

//# of text/phrase
int FindText(string x, string target)
{//start find
	int i = 0;
	int count = 0;
	while (x[i] != '\0')
	{//look through word
		if (x[i] == target[0])
		{//check to see if letters is the same as first letter as word
			int k = i;
			int j = 0;
			while (target[j] != '\0')
			{
				if (target[j] != x[k])
				{
					break;
				}
				if (target[j + 1] == '\0')
				{
					count += 1;
				}
				k++;
				j++;
			}
		}
		i++;
	}//end look through word
	return count;
}//end find

//change puncuation
void ReplaceExclamation(string x)
{//start look
	cout << "Edited text: ";
	for (int i = 0; i < x.size(); i++)
	{//start look through string + making new/edited string
		if (x[i] == '!')
		{
			cout << ".";
		}
		else
		{
			cout << x[i];
		}
	}//end look through
	cout << endl;
}//end look

//shorten space
void ShortenSpace(string x)
{//start looking
	cout << "Edited text: ";
	for (int i = 0; i < x.size(); i++)
	{//start look through string + making new/edited string
		if (x[i] == ' ' && x[i + 1] == ' ')
		{
			cout << " ";
			i++;
		}
		else
		{
			cout << x[i];
		}
	}//end look through
	cout << endl;
}//end looking

//print menu
void PrintMenu(string x)
{//start
	char option;//user input to decide what to do to string
	bool passLoop = true;//bool to keep main loop going
	bool check = true;//bool to check for option
	while (passLoop == true)
	{//start loop to display options
		//displays options
		cout << "MENU" << endl;

		cout << "c - Number of non-whitespace characters" << endl;
		cout << "w - Number of words" << endl;
		cout << "f - Find text" << endl;
		cout << "r - Replace all !'s" << endl;
		cout << "s - Shorten spaces" << endl;
		cout << "q - Quit" << endl;

		//asks for options
		char option;
		cout << "Choose an option: ";
		cin >> option;

		//validate user input option
		while (check)
		{//start validate char check
			if (option != 'q' && option != 'c' && option != 'w' && option != 'f' && option != 'r' && option != 's')
			{
				cout << "Choose an option: ";
				cin >> option;
			}
			else
			{
				check = false;
			}
		}//end validate

		//execue options

		//quit
		if (option == 'q')
		{
			passLoop = false;
		}

		//!space count
		else if (option == 'c')
		{
			int nonSpace = GetNumOfNonWSCharacters(x);
			cout << "Number of non-whitespace characters: " << nonSpace << endl;
		}

		//word count
		else if (option == 'w')
		{
			int wordC = GetNumOfWords(x);
			cout << "Number of words: " << wordC << endl;
		}

		//phrase/text count
		else if (option == 'f')
		{
			int phrase;
			string target;
			cout << "Enter a word or phrase to be found: ";
			cin >> target;
			phrase = FindText(x, target);
			cout << "\"" << target << "\"" << " instances: " << phrase << endl;

		}

		//replace "!" w/ "."
		else if (option == 'r')
		{
			ReplaceExclamation(x);
		}

		//replace "  " (double space) w/ " " (single space)
		else if (option == 's')
		{
			ShortenSpace(x);
		}
	}//end loop to display options
}//end
