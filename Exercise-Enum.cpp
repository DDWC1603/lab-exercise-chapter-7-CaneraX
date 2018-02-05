#include<iostream>
#include<string>
using namespace std;
int main()
{
	//if the day is sunday, what day is it?
	//write your code using enum and Sunday is your default 'day'
	enum minggu{Mon,Tue,Wed,Thu,Fri,Sat,Sun};

	char  hariIni;

	hariIni = Sun;


	cout << "Hari ke-"<<hariIni + 1;
	return 0;

}
