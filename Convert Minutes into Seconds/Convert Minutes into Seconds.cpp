using namespace std;
#include <iostream>

int convert(int minutes) 
{
	return minutes * 60;
}

int main()
{
	int mins;
	cin >> mins;

	cout << convert(mins);
}


