
#include <iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{

	string myName = "Mike";//write your name there.
						   //make a while loop until user input 'quit' to exit/end the program

	int loop;
		string userName;
		//get the user input for string.
		cin >> userName;
		while (true)
		{
			if (userName == "Abu")
			{
				cout << "Hey Abu!" << endl;
				break;
			}
			else if (userName == "quit")
			{
				cout << endl;
				break;
			}
			else
			{
				cout << "Aha! its " << myName << endl;
				break;
			}
		}
		
	return 0;
}


