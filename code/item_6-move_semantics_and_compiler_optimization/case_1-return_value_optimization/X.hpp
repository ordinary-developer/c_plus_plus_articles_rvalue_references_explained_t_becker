#ifndef X_HPP
#define X_HPP

#include <iostream>

class X {
public:
    X() {
        std::cout << "default ctor\n"; 
    }

    X(const X&) { 
        std::cout << "copy ctor\n"; 
    }

    X& operator= (const X&) { 
        std::cout << "copy assignment operator\n";
	return *this;
    }

    X(const X&&) {
        std::cout << "move ctor\n";
    }

    X& operator= (const X&&) {
        std::cout << "move assignment operator\n";
	    return *this;
    }
};

#endif