using namespace std;
#include <iostream>

bool acceptIntoMovie(int age, bool isSupervised) 
{
	if (age >= 15 or isSupervised == true) 
	{
		return true;
	}
	else
		return false;
}

int main()
{
	int age, bool isSupervised;
	cin >> age >> isSupervised;

	cout << acceptIntoMovie(age, isSupervised);
}

