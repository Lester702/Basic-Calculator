#include <iostream>
using namespace std;

class calc {
public:
	int a;
	int b;
};

int main() {
	bool calcOn = true;
	int choice;
	calc add;
	calc div;
	calc mul;
	calc sub;

	cout << "***********************************\n";
	cout << "***WELCOME TO A BASIC CALCULATOR***\n";
	cout << "***********************************\n";
	cout << "1 - Muliply\n";
	cout << "2 - Divide\n";
	cout << "3 - Add\n";
	cout << "4 - Subtract\n";
	cout << "5 - Exit\n";
	cout << "Choose an option\n";
	cin >> choice;

	switch (choice) {
	case 1: {
		cout << "Enter the first number\n";
		cin >> mul.a;
		cout << "Enter the second number\n";
		cin >> mul.b;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		int mulAns = mul.a * mul.b;
		cout << "The answer is: " << mulAns;
		break;
	}
	case 2: {
		cout << "Enter the first number\n";
		cin >> div.a;
		cout << "Enter the second number\n";
		cin >> div.b;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		int divAns = div.a / div.b;
		cout << "The answer is: " << divAns;
		break;
	}
	case 3: {
		cout << "Enter the first number\n";
		cin >> add.a;
		cout << "Enter the second number\n";
		cin >> add.b;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		int addAns = add.a + add.b;
		cout << "The answer is: " << addAns;
		break;
	}
	case 4: {
		cout << "Enter the first number\n";
		cin >> sub.a;
		cout << "Enter the second number\n";
		cin >> sub.b;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		int subAns = sub.a - sub.b;
		cout << "The answer is: " << subAns;
		break;
	}
	default: {
		cout << "That is not a valid option! Please choose an option\n";
		cin >> choice;
	}
	}
}