#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::_debug( void )
{
	std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << RESET << std::endl;
}
void Harl::_info( void )
{
	std::cout << GREEN <<  "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"  << RESET << std::endl;

}
void Harl::_warning( void )
{
	std::cout << BOLD << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}
void Harl::_error( void )
{
	std::cout << BOLD << RED << "This is unacceptable ! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level){
   
	void (Harl::*functionptr[])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levelNb[] = {"debug","info", "warning", "error"};
	for(int i = 0; i < 4 ; i++)
	{
		if (levelNb[i] == level)
			(this->*functionptr[i])();
	}
}

