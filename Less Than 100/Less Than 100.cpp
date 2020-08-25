using namespace std;
#include <iostream>

bool lessThan100(int a, int b) 
{
	if (a + b < 100) 
	{
		return true;
	}
	else
		return false;
}

int main()
{
	int c, d;
	cin >> c >> d;

	cout << lessThan100(c, d);
}


