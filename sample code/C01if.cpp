#include <iostream>

using namespace std;

int main()
{
	char answer;
	cout << "If it raining? [y=yes]: ";
	cin >> answer;
	if (answer == 'y') {
		cout << "Get an ambrella. ";
	}
	
	return 0;
}
