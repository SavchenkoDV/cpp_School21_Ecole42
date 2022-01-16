#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <limits>
# include <string>
# include <typeinfo>

class Convert {

public:
	Convert();
	~Convert();
	Convert(const Convert& copy);
	Convert& operator=(const Convert& overload);
	Convert(const std::string& s);
	void toChar() const;
	void toInt() const;
	void toFloat() const;
	void toDouble() const;


private:
	void printF(bool all_zero_after_point) const;
	void printD(bool all_zero_after_point) const;
	const std::string _string;
	std::string _char;
	std::string _int;
	std::string _float;
	std::string _double;
	int _endf;
	int _sign;
	int _qtySymbol;
	int _qtyPoint;
	int _qtyDigit;
};

#endif
