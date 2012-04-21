#include "console.hpp"
#include "operators.hpp"

int main() {
	Console console;
	int i;
	console >> i << " i is " << i << '\n';
	return 0;
}
