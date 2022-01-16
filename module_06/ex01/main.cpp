#include <iostream>
#include <string>

typedef struct	Data
{
	uintptr_t num;
}				Data;

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}


int main() {
	Data data, *p_data;
	p_data = &data;
	std::cout << "Address p_data:					" << p_data << std::endl;
	data.num = serialize(p_data);
	std::cout << "Serialize address p_data to uintptr_t: 		" << data.num  << std::endl;
	std::cout << "Deserialize uintptr_t to address p_data: 	" << deserialize(data.num) << std::endl;
	return 0;
}
