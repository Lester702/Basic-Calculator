//Created by Lester702
//Uses a MIT License
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;


class calc {
public:
	int a;
	int b;
};
//git is starting to get annoying :DDDDDDDDDDDDDD
int main() {
	bool calcOn = true; // I don't know what this
	int choice;         //
	calc add;           //
	calc div;           //
	calc mul;           //
	calc sub;           //
	calc pyth;          //
                        //
	while (calcOn != false) {//or this does, but it works
		cout << "***********************************\n";
		cout << "***WELCOME TO A BASIC CALCULATOR***\n";
		cout << "*******************BY: Lester 702**\n";
		cout << "1 - Multiply\n";
		cout << "2 - Divide\n";
		cout << "3 - Add\n";
		cout << "4 - Subtract\n";
		cout << "5 - Pythagorean Theorem\n";
		cout << "6 - Exit\n";
		cout << "Choose an option\n";
		cin >> choice;

		switch (choice) {
		case 1: { //Multiplication section
			cout << "Enter the first number\n";
			cin >> mul.a;
			cout << "Enter the second number\n";
			cin >> mul.b;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			int mulAns = mul.a * mul.b;
			cout << "The answer is: " << mulAns << "\n\n\n";
			break;
		}
		case 2: { //Division section
			cout << "Enter the first number\n";
			cin >> div.a;
			cout << "Enter the second number\n";
			cin >> div.b;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			int divAns = div.a / div.b;
			cout << "The answer is: " << divAns << "\n\n\n";
			break;
		}
		case 3: { //Addition section
			cout << "Enter the first number\n";
			cin >> add.a;
			cout << "Enter the second number\n";
			cin >> add.b;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			int addAns = add.a + add.b;
			cout << "The answer is: " << addAns << "\n\n\n";
			break;
		}
		case 4: { //Subtraction section
			cout << "Enter the first number\n";
			cin >> sub.a;
			cout << "Enter the second number\n";
			cin >> sub.b;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			int subAns = sub.a - sub.b;
			cout << "The answer is: " << subAns << "\n\n\n";
			break;
		}//Garbage Pythagorean Theorem Calculator
		case 5: {
			cout << "Enter the first number\n";
			cin >> pyth.a;
			cout << "Enter the second number\n";
			cin >> pyth.b;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			double addPyth = pow(pyth.a, 2) + pow(pyth.b, 2);
			double root = sqrt(addPyth);
			cout << "The answer is: " << root << "\n\n\n";
			break;
		}
		case 6: { //Closes program
			calcOn = false;
			break;
		} //If anything is entered that is not in the switch this will run
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
	}
}
