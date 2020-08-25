using namespace std;
#include <iostream>

int triArea(int base, int height) 
{
	int area = (base * height) / 2;
	return area;
}

int main()
{
	int base, height; 
	cin >> base >> height;

	cout << triArea(base, height);
}

