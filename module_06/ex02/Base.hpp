#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>

class Base {
public:
	virtual ~Base();
};

Base * generate(void);
class A: public Base { };
class B: public Base { };
class C: public Base { };
void identify(Base* p);
void identify(Base& p);

#endif