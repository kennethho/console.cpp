#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include <iostream>
#include <memory>

class Console : public std::iostream {
public:
	Console();
	virtual ~Console();

private:
	Console( const Console & );
	Console & operator =( const Console & );
	class Private;
	std::unique_ptr< Private > p_;
};

#endif
