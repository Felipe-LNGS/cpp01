#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(const std::string &name){
this->_name =name;
std::cout << CYAN<< "Zombie " << this->_name << " has emerged from the lab."<< RESET << std::endl;
}

Zombie::~Zombie(){
std::cout << RED << this->_name  << " is dead" << RESET << std::endl;
}

void Zombie::announce(){
std::cout << BOLD << GREEN << this->_name << ": BraiiiiiiinnnzzzZ..."<< RESET << std::endl;
}
