#include <iostream>
#include <String>
using namespace std;


int main()
{
	int numbers[] = { 0,1,2,3,4,5,6,7,8,9,10 };

	int* NumPtr = numbers;

	cout << *NumPtr << endl;

	NumPtr++;

	cout << *NumPtr << endl;

	NumPtr++;

	cout << *NumPtr << endl;

	NumPtr += 3;

	cout << *NumPtr << endl;

	system("pause");
}