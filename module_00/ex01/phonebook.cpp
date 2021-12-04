#include "phonebook.hpp"

Phonebook::Phonebook() {
	index_of_contact        = 0;
	size_of_phonebook 	    = 0;
}

Phonebook::~Phonebook() {
}

void Phonebook::add_contact() {
	if (size_of_phonebook < 8) {
		array_contact[index_of_contact].contactSet();
		++index_of_contact;
		++size_of_phonebook;
	} else {
		index_of_contact = (index_of_contact == 8) ? -1 : index_of_contact;
		array_contact[++index_of_contact].contactSet();
	}
}

void Phonebook::show_phonebook() {
    std::string input;
	const char *index;
	if (size_of_phonebook == 0) {
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}
    std::cout   << std::setw(10) << "Index" << " | "
                << std::setw(10) << "First name" << " | "
                << std::setw(10) << "Last name" << " | "
                << std::setw(10) << "Nick name" << " | "
                << std::endl;
    for (int counter = 0; size_of_phonebook > counter; ++counter) {
        std::cout << std::setw(10) << counter << " | ";
        array_contact[counter].getContactsWithThreeColumns();
    }
	std::cout << "Input index: ";
    std::getline(std::cin, input);
	index = input.c_str();

	if (input.length() != 1) {
		std::cout << "Invalid argument!" << std::endl;
		return;
	} else if (index[0] == '0') {
		array_contact[0].getContactsWithAllColumns();
	} else if (std::atoi(index) > 0 && std::atoi(index) < size_of_phonebook) {
		array_contact[std::atoi(index)].getContactsWithAllColumns();
    } else {
       std::cout << "Invalid argument!" << std::endl;
    }
}



