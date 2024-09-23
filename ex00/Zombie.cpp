#include "Zombie.hpp"


Zombie::Zombie(const std::string &name){
this->_name =name;
std::cout << GREEN << "Zombie " << this->_name << " has emerged from the lab."<< RESET << std::endl;
}

Zombie::~Zombie(){
std::cout << RED << this->_name << " is dead" << RESET << std::endl;
}

void Zombie::announce(){
std::cout << GREEN << this->_name << ": BraiiiiiiinnnzzzZ..."<< RESET << std::endl<< std::endl;
}