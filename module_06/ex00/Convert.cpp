#include "Convert.hpp"

Convert::Convert() : _string("None"), _qtySymbol(0), _qtyDigit(0), _qtyPoint(0), _endf(0),
_sign(0), _char("None"), _int("None"), _float("None"), _double("None") { }

Convert::~Convert() { }

Convert::Convert(const Convert& copy) : _string(copy._string) , _qtySymbol(copy._qtySymbol),
_qtyDigit(copy._qtyDigit), _qtyPoint(copy._qtyPoint), _endf(copy._endf), _sign(copy._sign),
_char(copy._char), _int(copy._int), _float(copy._float), _double(copy._double) { }

Convert &Convert::operator=(const Convert& overload) {
	if (this == &overload) { return *this; }
	_qtyPoint = overload._qtyPoint;
	_qtySymbol = overload._qtySymbol;
	_qtyDigit = overload._qtyDigit;
	_endf = overload._endf;
	_sign = overload._sign;
	_char = overload._char;
	_int = overload._int;
	_float = overload._float;
	_double = overload._double;
	return *this;
}

Convert::Convert(const std::string& s) : _string(s), _qtySymbol(0), _qtyDigit(0), _qtyPoint(0),
_endf(0), _sign(0), _char("None"), _int("None"), _float("None"), _double("None") {

	if (s == "nan" || s == "nanf" || s == "-inf" || s == "+inf") {
		_char = "impossible";
		_int = "impossible";
		if (s == "nanf") { _double = "nan"; }
		if (s == "+inff") { _double = "+inf"; }
		if (s == "+inff") { _double = "+inf"; }
		s == "+inf" || s == "-inf" || s == "nan" ? _float = s + "f" : _float = s;
	} else {
		for (int ch = 0; s[ch] != '\0'; ++ch) {
			if (ch == 0 && (s[0] == '-' || s[0] == '+')) { _sign = 1; }
			else if (isdigit(s[ch])) { ++_qtyDigit; }
			else if (s[ch] == '.') { ++_qtyPoint; }
			else if (s[ch + 1] == '\0' && s[ch] == 'f') { _endf = 1; }
			else { ++_qtySymbol; }
		}
		_qtySymbol = _qtySymbol + _qtyPoint + _sign + _endf;
	}
}

void Convert::toChar() const {
	if ( _char != "None" )
	{
		std::cout << "char: " << _char << std::endl;
	}
	else if ( _qtySymbol == 1 && isprint(_string[0]) && !isdigit(_string[0]) && _qtyDigit == 0 )
	{
		std::cout << "char: " << static_cast<char>(_string[0]) << std::endl;
	}
	else if ( _qtySymbol == _qtyPoint + _sign + _endf && isprint(static_cast<int>(strtod (_string.c_str(),NULL))) )
	{
		std::cout << "char: " << static_cast<char>(strtod(_string.c_str(),NULL)) << std::endl;
	}
	else if (_qtyPoint > 1
			 || ((static_cast<int>(strtod (_string.c_str(),NULL)) < 0
				  || (static_cast<int>(strtod (_string.c_str(),NULL)) > 128)))
			 || _qtySymbol > _qtyPoint + _sign + _endf)
	{
		std::cout << "char: impossible" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}
}

void Convert::toInt() const {
	if ( _int != "None" ) {
		std::cout << "int: " << _int << std::endl;
	} else {
		if (_qtyDigit > 0 && _qtySymbol == _qtyPoint + _sign + _endf) {
			if (std::numeric_limits<int>::max() < strtod( _string.c_str(),NULL )) {
				std::cout << "int: impossible" << std::endl;
			} else if (std::numeric_limits<int>::min() > strtod( _string.c_str(),NULL )) {
				std::cout << "int: impossible" << std::endl;
			} else {
				std::cout << "int: " << static_cast<int>(strtod( _string.c_str(),NULL )) << std::endl;
			}
		} else if (_qtySymbol == 1 && _string.size() == 1) {
			std::cout << "int: " << static_cast<int>(_string[0]) << std::endl;
		} else {
			std::cout << "int: nan" << std::endl;
		}
	}
}

void Convert::toFloat() const {
	size_t _qtyZero = 0;
	bool all_zero_after_point = false;
	if ( _float != "None" ) {
		std::cout << "float: " << _float << std::endl;
	} else {
		if (_qtyDigit > 0 && _qtySymbol == _qtyPoint + _sign + _endf) {
			if (_qtyPoint) {
				size_t i = _string.find('.');
				size_t string_size = _string.size();
				if (_endf) { --string_size; }
				size_t size_after_point = string_size - _string.find('.') - 1;
				while (_string[++i] == '0') { ++_qtyZero; }
				_qtyZero == size_after_point ? all_zero_after_point = true
											 : all_zero_after_point = false;
			}
			if (_qtyPoint > 1)
				std::cout << "float: nanf" << std::endl;
			else if (std::numeric_limits<float>::max() < strtod(_string.c_str(), NULL))
				printF(all_zero_after_point);
			else if (std::numeric_limits<float>::max() * -1 > strtod(_string.c_str(), NULL))
				printF(all_zero_after_point);
			else
				printF(all_zero_after_point);
			} else {
				std::cout << "float: nanf" << std::endl;
			}
		}
}


void Convert::printF(bool all_zero_after_point) const {

		if (strtod(_string.c_str(), NULL) >= 1000000 || strtod(_string.c_str(), NULL) <= -1000000)
	{
		std::cout << "float: "
				  << static_cast<float>(strtod(_string.c_str(), NULL)) << "f"
				  << std::endl;
	} else if (all_zero_after_point) {
		std::cout << "float: "
				  << static_cast<float>(strtod(_string.c_str(), NULL)) << ".0f"
				  << std::endl;
	} else if (_qtyPoint){
		std::cout << "float: "
				  << static_cast<float>(strtod(_string.c_str(), NULL)) << "f"
				  << std::endl;
	} else {
		std::cout << "float: "
				  << static_cast<float>(strtod(_string.c_str(), NULL)) << ".0f"
				  << std::endl;
	}
}

void Convert::toDouble() const {
	size_t _qtyZero = 0;
	bool all_zero_after_point = false;
	if ( _double != "None" ) {
		std::cout << "double: " << _double << std::endl;
	} else {
		if (_qtyDigit > 0 && _qtySymbol == _qtyPoint + _sign + _endf) {
			if (_qtyPoint) {
				size_t i = _string.find('.');
				size_t string_size = _string.size();
				size_t size_after_point = string_size - _string.find('.') - 1;
				while (_string[++i] == '0') { ++_qtyZero; }
				_qtyZero == size_after_point ? all_zero_after_point = true
											 : all_zero_after_point = false;
			}
			if (_qtyPoint > 1)
				std::cout << "double: nan" << std::endl;
			else if (std::numeric_limits<double>::max() < strtod(_string.c_str(), NULL))
				printD(all_zero_after_point);
			else if (std::numeric_limits<double>::max() * -1 > strtod(_string.c_str(), NULL))
				printD(all_zero_after_point);
			else
				printD(all_zero_after_point);
		} else if (_string == "+inf") {
			std::cout << "double: +inf" << std::endl;
		} else if (_string == "-inf") {
			std::cout << "double: -inf" << std::endl;
		} else { std::cout << "double: nan" << std::endl; }
	}
}

void Convert::printD(bool all_zero_after_point) const {
	if (strtod(_string.c_str(), NULL) >= 1000000 || strtod(_string.c_str(), NULL) <= -1000000)
	{
		std::cout << "double: " << strtod(_string.c_str(), NULL) << std::endl;
	} else if (all_zero_after_point) {
		std::cout << "double: " << strtod(_string.c_str(), NULL) << ".0"<< std::endl;
	} else if (_qtyPoint){
		std::cout << "double: " << strtod(_string.c_str(), NULL)  << std::endl;
	} else {
		std::cout << "double: " << strtod(_string.c_str(), NULL) << ".0" << std::endl;
	}
}
