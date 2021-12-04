#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "contact.hpp"

class Phonebook {

public:
	Phonebook();
	~Phonebook();
	void add_contact();
	void show_phonebook();

private:
	int 	size_of_phonebook;
	int 	index_of_contact;
	Contact array_contact[8];
};

#endif
