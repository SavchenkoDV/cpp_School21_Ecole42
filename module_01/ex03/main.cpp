#include "Weapon.hpp"

int main() {
    Weapon weapon = Weapon();
    std::cout << weapon.getType() << std::endl;
    weapon.setType("glock");
    std::cout << weapon.getType() << std::endl;
    weapon.setType("glock1");
    std::string test = weapon.getType();
    test = "dima";
    std::cout << test << std::endl;
    return 0;
}
