#include <iostream>

using namespace std;

int main ()
{

	string nickname;
	string course;
	string year;
	string school;
	
	cout <<  "Enter your nickname:\t";
	cin >> nickname;
	cout << "Your course:\t";
	cin >> course;
	cout << "year:\t";
	cin >> year;
	cout << "Enter your school:\t";
	cin >> school;
	
	cout << "Wow Congrats " << nickname << " and your are studying " << course << " year " << year << " and you are studying in " << school << " which is one of the Center of Excellencent Teritiary Education " << endl;

	return 0;
}	
