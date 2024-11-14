#include <iostream>

using namespace std;

int main()
{
	char answer;
	cout << "If it raining? [y=yes,n=no]: ";
	cin >> answer;
	if (answer == 'y') {
		cout << "Get an ambrella. ";
	}
	else if (answer == 'n') {
		cout << "It is sunny. ";
	}
	else {
		cout << "Invalid input. ";
	}
	return 0;
}
