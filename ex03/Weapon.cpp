#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon) : _typeWeapon(weapon){}

Weapon::~Weapon(){}

void    Weapon::setType(const std::string &weapon){
_typeWeapon = weapon;
}

const std::string &Weapon::getType()const{
return _typeWeapon;
}
