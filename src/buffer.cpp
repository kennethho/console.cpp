#include "buffer.hpp"

Buffer::Buffer( std::streambuf * in, std::streambuf * out ): std::streambuf(), in_( in ), out_( out ) {
}

std::streamsize Buffer::showmanyc() {
	return this->in_->in_avail();
}

std::streamsize Buffer::xsgetn( char * s, std::streamsize n ) {
	return this->in_->sgetn( s, n );
}

int Buffer::underflow() {
	return this->in_->sgetc();
}

int Buffer::uflow() {
	int c = this->in_->sgetc();
	this->in_->snextc();
	return c;
}

int Buffer::pbackfail( int c ) {
	return this->std::streambuf::pbackfail( c );
}

std::streamsize Buffer::xsputn( const char * s, std::streamsize n ) {
	return this->out_->sputn( s, n );
}

int Buffer::overflow( int c ) {
	return this->std::streambuf::overflow( c );
}

Buffer::~Buffer() {
}
