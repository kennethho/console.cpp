#include "console_p.hpp"
#include "buffer.hpp"

Console::Private::Private() {
}

Console::Console():
std::iostream( new Buffer( std::cin.rdbuf(), std::cout.rdbuf() ) ) {
}

Console::~Console() {
	delete this->rdbuf();
}
