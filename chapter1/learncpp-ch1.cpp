#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	// intro Ch1
	int num2 =			4;
	int numVar =			0;
	string answer =			"";
	
	cout << 			"Enter an integer: ";
	getline 			(cin, answer);
	stringstream(answer)		>> numVar;
	cout << 			"Double that number is: " << numVar * 2 << '\n';
	cout << 			"Triple that number is: " << numVar * 3 << "\n \n";

	// Ch1 Review 1
	cout << 			"What is the difference between initialization and assignment? \n";
	getline 			(cin, answer);
	cout << 			"\nAnswer: \n \t Initialization provides a variable with an initial value (at the point of creation)."
					"Assignment gives a variable a new value after the variable has already been defined. \n \n"
					"Your answer: \n \t" << answer << "\n \n";

	// Ch1 Review 2
	cout << 			"When does undefined behavior occur? What are the consequences of undefined behavior? \n";
	getline 			(cin, answer);
	cout << 			"\nAnswer: \n \t Undefined behavior occurs when the programmer does something that is ill-specified by the C++ language. "
					"The consequences could be almost anything, from crashing to producing the wrong answer to working correctly anyway. \n \n"
					"Your answer: \n \t" << answer << "\n \n";

	// Ch1 Review 3
	cout << 			"Write a program that asks the user to enter a number, and then enter a second number. "
					"The program should tell the user what the result of adding and subtracting the two numbers are."
					"The output of the program should match the following (assuming inputs of 6 and 4): \n"
					"\n"
					"\t Enter an integer: 6\n"
					"\t Enter another integer: 4\n"
					"\t 6 + 4 is 10.\n"
					"\t 6 - 4 is 2. \n"
					"\n \n \n Press Enter to show answer";
	getline 			(cin, answer);
	cout << 			"----------------------------------------------------------------------"
					"\n\n#include <iostream> \n \n"
					"int main()\n"
					"{\n"
					"\tint x{};\n"
					"\tstd::cout << \"Enter an integer: \";\n"
					"\tstd::cin >> x;\n\n"
					"\tint y{};\n"
					"\tstd::cout << \"Enter another integer: \";\n"
					"\tstd::cin >> y;\n\n"
					"\tstd::cout << x << \" + \" << y << \" is \" << x + y << \".\\n\";\n"
					"\tstd::cout << x << \" - \" << y << \" is \" << x - y << \".\\n\";\n"
					"return 0;\n"
					"}\";\n\n"
					"----------------------------------------------------------------------\n";
	return 				0;
}
