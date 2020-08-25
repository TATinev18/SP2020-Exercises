using namespace std;
#include <iostream>

int circuitPower(int voltage, int current) 
{
	int result = voltage * current;
	return result;
}

int main()
{
	int vol, curr;
	cin >> vol >> curr;
	 
	cout << circuitPower(vol, curr);
}

