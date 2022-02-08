#include <string>
#include <iostream>

//using namespace std;

void PrintString(std::string str);

int main() {

	std::string str = "My dos's name is: ";
	std::string first = "Spot ";
	std::string last = "Jones";

	str += (first + last);

	PrintString(str);

	system("pause");
}

void PrintString(std::string str) {
	std::cout << str << std:: endl;
}
