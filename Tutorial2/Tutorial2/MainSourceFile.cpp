#include <iostream>
using namespace std;

void welcome()
{
	cout << "Welcome!!" << endl;
}

/// <summary>
/// Print a number
/// </summary>
/// <param name="numToPrint">int</param>
void printNumber(int numToPrint)
{
	cout << numToPrint << endl;
}

/// <summary>
/// Overload with floats
/// </summary>
/// <param name="numToPrint">float</param>
void printNumber(float numToPrint) 
{
	cout << numToPrint << endl;
}

int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}


int main()
{
	welcome();

	printNumber(8);

	printNumber(8.2f);

	printNumber(add(8, 5));

	system("pause");
}