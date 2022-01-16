#include "Base.hpp"

int main() {
	Base* first;
	first = generate();
	identify(first);
	identify(*first);

	delete first;
	return 0;
}
