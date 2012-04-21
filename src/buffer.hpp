#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <streambuf>

class Buffer : public std::streambuf {
public:
	Buffer( std::streambuf * in, std::streambuf * out );
	virtual ~Buffer();

protected:
	virtual std::streamsize showmanyc();
	virtual std::streamsize xsgetn( char * s, std::streamsize n );
	virtual int underflow();
	virtual int uflow();
	virtual int pbackfail( int c = EOF );

	virtual std::streamsize xsputn( const char * s, std::streamsize n );
	virtual int overflow( int c = EOF );

private:
	Buffer( const Buffer & );
	Buffer & operator =( const Buffer & );
	std::streambuf * in_;
	std::streambuf * out_;
};

#endif
