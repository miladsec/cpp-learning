//The basics of c++
#include <iostream>
#include <string>

using namespace std;

int main(){
	int number = 15;
	double cache = 100.10;
	char first = 'A';
	string name = "miladsec";
	bool aBool = true;
	cout << number << "\n";
	cout << "I'am " << name << "\n";

	// Declare multi variables
	int a = 5, b = 10, c = 15;

	int x, y, z;
	x = y = z = 50;
	cout << x + y + z << "\n";

	const int zero = 0;
	cout << "the zero is always:" << zero << "\n";

	// User inputs 
	string sayMyName;
	cout << "Say your name:";
	cin >> sayMyName;
	cout << "youe name is Heisenberg!! NO! it's " << sayMyName << "\n";

	// Dummy calculator
	int num1, num2;
	cout << "Give my num2:";
	cin >> num1;
	cout << "Give my num2:";
	cin >> num2;
	cout << num1 + num2; 
	cout << "\n";

	// ASCII print 
	char aChar = 65, bChar = 66, cChar = 67;
	cout << aChar << bChar << cChar;
	return 0;
}

