#include "console.hpp"
#include "operators.hpp"

int main() {
	Console console;
	int i;
	console << "input a integer: " >> i << "i is " << i << '\n';
	double d;
	console << "input a floating number: " >> d << "d is " << d << '\n';
	std::string s;
	console << "input a string: " >> s << "s is " << s << '\n';
	return 0;
}
