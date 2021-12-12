#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
	std::string line;
	std::string new_line;
	if (argc != 4) {
		std::cout << "Input: \"./replace filename s1 s2\" " << std::endl;
	} else if (!argv[2] || !argv[3]) {
		std::cout << "s1 and s2 must aren't empty" << std::endl;
	} else {
		std::ifstream in(argv[1]);
		if (!in.is_open()) {
			std::cout << "File doesn't exist!" << std::endl;
			return 0;
		}
		std::ofstream out;
		std::string filename = argv[1];
		out.open( filename + ".replace");
		if (!out.is_open()) {
			out << "Can't create file!" << std::endl;
			return 0;
		}
		while (std::getline(in, line)) {
			size_t found = line.find(argv[2]);
			while (found != std::string::npos) {
				new_line.insert(new_line.length(), line.substr (0,found));
				new_line += argv[3];
				line.erase(0, found + strlen(argv[2]));
				found = line.find(argv[2]);
			}
			if (line.length() > 0) { new_line += line; }
			out << new_line << std::endl;
			new_line.erase(0, new_line.length());
		}
		in.close();
		out.close();
	}
	return 0;
}
