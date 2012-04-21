#include "console.hpp"
#include "operators.hpp"

int main() {
	Console console;
	int i;
	console << "input a integer: " >> i << "i is " << i << std::endl;
	double d;
	console << "input a floating number: " >> d << "d is " << d << std::endl;
	std::string s;
	console << "input a string: " >> s << "s is " << s << std::endl;
	return 0;
}
