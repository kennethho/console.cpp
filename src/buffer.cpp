#include "buffer_p.hpp"

Buffer::Private::Private( std::streambuf * in, std::streambuf * out ):
in( in ),
out( out ) {
}

Buffer::Buffer( std::streambuf * in, std::streambuf * out ): std::streambuf(), p_( new Private( in, out ) ) {
}

Buffer::~Buffer() {
}
