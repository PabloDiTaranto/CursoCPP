#include <iostream>
using namespace std;

int main()
{

	for (int i = 0; i < 10;  i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
			}
		}
	}



	/*double numberPi = 3.14159;
	double numberE = 2.718281828;

	int count = 0;

	bool condition = true;

	do
	{
		cout << "The number Pi is: " << numberPi << endl;
		cout << "The number E is: " << numberE << endl;
		cout << "Count: " << count << endl;
		cout << "Pi + E * count = " << numberPi + numberE * count << endl;		

		count++;

		if (count <= 100) {
			condition = true;
		}
		else
		{
			condition = false;
		}

	} while (condition);
	*/
	system("pause");
}