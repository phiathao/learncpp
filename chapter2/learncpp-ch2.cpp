#include <iostream>

void doPrintTwo()
{
	std::cout <<		"In doPrintTwo() ---------- function calling function \n";
}

void doPrintStart()
{
	std::cout <<		"In doPrintStart() \n";
	doPrintTwo();
}

int main(){
	std::cout <<		"In main() \n";
	doPrintStart();		// call doPrintStart()
	doPrintStart();		// call doPrintStart() should see text 2x
	std::cout <<		"End main() \n";
	return 0;
}

// Starting main()
// In doPrint()
// In doPrint()
// Ending main()
// Nested Function are not supported