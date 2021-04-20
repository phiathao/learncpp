#include <iostream>

void doPrint()
{
	std::cout <<		"In doPrint() \n";
}

int main(){
	std::cout <<		"In main() \n";
	doPrint();		// call doPrint()
	doPrint();		// call doPrint() should see text 2x
	std::cout <<		"End main() \n";
	return 0;
}

// Starting main()
// In doPrint()
// In doPrint()
// Ending main()