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
	cout << aChar << bChar << cChar << "\n";
	
	// Strings
	string name1 = "Milad";
	string lastname1 = "Dehghan";
	cout << name1.append(lastname1) << "\n";

	cout << "lenght of the name sting:" << name1.size() << "\n";
	
	//Alos you can set index as well: name1[0] = 'x'; 
	cout << "get char by string index (name1[0]):" << name1[0] << "\n";
	
	// User input string
	// getline (cin, fullName); read line for example can take full name
	string fullNamex;
	
	cout << "Enter you x full name:\n";

	getline (cin, fullNamex);

	cout << "the x full name is:" << fullNamex;

	return 0;
}

