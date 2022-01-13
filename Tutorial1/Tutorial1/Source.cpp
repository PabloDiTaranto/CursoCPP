#include <iostream>
using namespace std;

int main() 
{
	int a(18);
	int b = 13;

	if (b < a) 
	{
		cout << "b is less than a." <<  endl;
	}
	else if(a < b)
	{
		cout << "a is less than b" << endl;
	}
	else
	{
		cout << "a is equal to b" << endl;
	}

	system("pause");
}