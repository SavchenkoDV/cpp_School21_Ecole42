#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Contact {

public:
	Contact();
	~Contact();
	void contactSet();
	void getContactsWithAllColumns();
	void getContactsWithThreeColumns();

private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
};

#endif