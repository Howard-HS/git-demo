#include <iostream>

#include "PrintMessage.h"

using namespace Output;

int main()
{
	int a = 10, b = 12;
	int c = a + b;

	printMessage("Hello World");
	printMessage("Added a new line here");

	printMessage("The result is " + std::to_string(c));
	return 0;
}
