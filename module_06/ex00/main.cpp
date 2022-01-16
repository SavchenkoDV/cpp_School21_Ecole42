#include "Convert.hpp"


int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Wrong arguments!" << std::endl;
		return (0);
	}
	Convert convert(argv[1]);
	convert.toChar();
	convert.toInt();
	convert.toFloat();
	convert.toDouble();
	return 0;
}
