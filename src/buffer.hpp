#ifndef BUFFER_HPP
#define BUFFER_HPP

#include <streambuf>
#include <memory>

class Buffer : public std::streambuf {
public:
	Buffer( std::streambuf * in, std::streambuf * out );
	virtual ~Buffer();

private:
	Buffer( const Buffer & );
	Buffer & operator =( const Buffer & );
	class Private;
	std::unique_ptr< Private > p_;
};

#endif
