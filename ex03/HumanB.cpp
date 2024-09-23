#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon){
    _weapon = &weapon;
}

void HumanB::attack()const{
if (this->_weapon)
    std::cout << MAGENTA << _name << " attacks with their " << _weapon->getType() << RESET << std::endl;
else
    std::cout << MAGENTA << _name << " has no weapon " << RESET << std::endl;
}
