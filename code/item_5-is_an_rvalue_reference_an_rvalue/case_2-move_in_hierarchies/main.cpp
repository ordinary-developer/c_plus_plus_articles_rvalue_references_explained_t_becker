#include <iostream>
#include <memory>

class Base {
public:
    Base() {
        std::cout << "default ctor\n"; 
    }

    Base(const Base& rhs) { 
        std::cout << "copy ctor\n"; 
    }

    Base& operator= (const Base& rhs) { 
        std::cout << "copy assignment operator\n";
	return *this;
    }

    Base(const Base&& rhs) {
        std::cout << "move ctor\n";
    }

    Base& operator= (const Base&&) {
        std::cout << "move assignment operator\n";
	return *this;
    }
};

class Derived : public Base {
public:
    Derived() { 
        std::cout << "derived default ctor\n";
    }

    Derived(const Derived& rhs) 
 	: Base(rhs)
    {
        std::cout << "derived copy ctor\n";
    }

    Derived& operator= (const Derived& rhs) {
        std::cout << "derived copy assignment operator\n";
        return *this;
    }

    Derived(const Derived&& rhs) 
        : Base(std::move(rhs)) // very important
    {
    	std::cout << "derived move ctor\n";
    }

    Derived& operator= (const Derived&& rhs) {
        return *this;
    }

};


int main() {
    return 0;
}
