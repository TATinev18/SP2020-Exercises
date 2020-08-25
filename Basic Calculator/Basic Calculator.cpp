using namespace std;
#include <iostream>

int calculator(int num1, char op, int num2) 
{
	switch (op) {
	case '+': return num1 + num2; break;
	case '-': return num1 - num2; break; 
	case '*': return num1 * num2; break;
	case '/': return num1 / num2; break;
	}

}

int main()
{
	int numOne, numTwo;
	char operation;
	cin >> numOne >> operation >> numTwo; 

	cout << calculator(numOne, operation, numTwo);
}
