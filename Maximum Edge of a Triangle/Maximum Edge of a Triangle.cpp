using namespace std;
#include <iostream>

int nextEdge(int side1, int side2) 
{
	if (side1 >= 0 and side2 >= 0) 
	{
		return (side1 + side2) - 1;
	}

}

int main()
{
	int sideOne, sideTwo;
	cin >> sideOne >> sideTwo;

	cout << nextEdge(sideOne, sideTwo);
}


