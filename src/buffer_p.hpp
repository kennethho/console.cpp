#ifndef BUFFER_P_HPP
#define BUFFER_P_HPP

#include "buffer.hpp"

class Buffer::Private {
public:
	Private( std::streambuf * in, std::streambuf * out );

	std::streambuf * in;
	std::streambuf * out;
};

#endif
