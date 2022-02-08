#include <iostream>
#include <string>
using namespace std;


void Print(string str);
void Print(int num);
void Print(string str1, string str2);
void Print(int num, string str);

int main() 
{

	Print(5, "My String 2 ");

	system("pause");
}

void Print(string str) {
	cout << str << endl;
}

void Print(int num) {
	cout << num << endl;
}

void Print(string str1, string str2) {
	cout << "string 1: " << str1 << endl;
	cout << "string 2: " << str2 << endl;
}
void Print(int num, string str) {
	cout << "Integer Value: " << num << endl;
	cout << str << endl;
}



