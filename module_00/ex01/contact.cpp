#include "contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::contactSet() {
	std::cout << "Input first name and press enter: ";
	std::getline(std::cin, this->first_name);
	std::cout << "Input last name and press enter: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Input nick name and press enter: ";
	std::getline(std::cin, this->nick_name);
	std::cout << "Input phone number and press enter: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Input darkest secret and press enter: ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::getContactsWithAllColumns() {
	std::cout << "first name: " + this->first_name << std::endl;;
	std::cout << "last name: " + this->last_name << std::endl;;
	std::cout << "nick name: " +  this->nick_name << std::endl;;
	std::cout << "phone number: " +  this->phone_number << std::endl;;
	std::cout << "darkest secret: " +  this->darkest_secret << std::endl;
}

void Contact::getContactsWithThreeColumns() {
	if (this->first_name.length() > 10) {
		std::cout	<< std::setw(10)
					 << this->first_name.substr(0, 9) + ". | ";
	} else {
		std::cout	<< std::setw(10) << this->first_name << " | ";
	}
	if (this->last_name.length() > 10) {
		std::cout	<< std::setw(10)
					 << this->last_name.substr(0, 9) + ". | ";
	} else {
		std::cout	<< std::setw(10) << this->last_name << " | ";
	}
	if (this->nick_name.length() > 10) {
		std::cout	<< std::setw(10)
					 << this->nick_name.substr(0, 9) + ". | ";
	} else {
		std::cout << std::setw(10) << this->nick_name << " | ";
	}
	std::cout << std::endl;
}