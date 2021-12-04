#include "phonebook.hpp"

int main()
{
	std::string command;
	Phonebook phonebook = Phonebook();
	std::cout << "Input commands: ADD, SEARCH or EXIT:" << std::endl;
	while (std::getline(std::cin, command)) {
		if (command == "ADD") {
			phonebook.add_contact();
			std::cout << "Contact added in the phonebook!" << std::endl;
		} else if (command == "SEARCH") {
			phonebook.show_phonebook();
			std::cout << "Search completed!" << std::endl;
		} else if (command == "EXIT") {
			std::cout << "EXIT command executed!" << std::endl;
			break;
		} else {
			std::cout
			<< "Invalid command! List of available commands:" << std::endl
			<< " - ADD" << std::endl
			<< " - SEARCH" << std::endl
			<< " - EXIT" << std::endl;
		}
	}
	return 0;
}
