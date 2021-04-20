#include <iostream>

void doPrintTwo() // void function return nothing
{
	std::cout <<		"In doPrintTwo() ---------- function calling function \n";
}

void doPrintStart()
{
	std::cout <<		"In doPrintStart() \n";
	doPrintTwo();
}

int getValueFromUser()
{	
	std::cout <<		"Enter an integer: ";
	int userIntInput =	0;
	std::cin >>		userIntInput;

	return userIntInput;
}

int get9()
{
	return 9;
}

void basicAddition()
{
	int firstValueInput =	getValueFromUser();
	int secondValueInput = 	getValueFromUser();
	std::cout <<		"First input from user is: " << firstValueInput << "\n";
	std::cout <<		"Second input from user is: " << secondValueInput << "\n";
	std::cout <<		"Combined input is: " << firstValueInput + secondValueInput << "\n";
	std::cout <<		firstValueInput << " + " << secondValueInput << " = "
				<< firstValueInput + secondValueInput << "\n";
}

int main(){
	std::cout <<		"In main() \n";
	doPrintStart();		// call doPrintStart()
	doPrintStart();		// call doPrintStart() should see text 2x
	basicAddition();
	get9();			// function is call and return with 9 but is not being use
	std::cout <<		"End main() \n";
	return 0;
}

// Starting main()
// In doPrint()
// In doPrint()
// Ending main()
// Nested Function are not supported