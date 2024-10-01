#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::_debug( void )
{
	std::cout << std::endl << std::setw(30) << UNDERLINE << MAGENTA << "[  DEBUG  ]" << RESET <<std::endl;
	std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << RESET << std::endl;
}
void Harl::_info( void )
{
	std::cout << std::endl << std::setw(30) << UNDERLINE << MAGENTA << "[  INFO  ]" << RESET <<std::endl;
	std::cout << GREEN <<  "I cannot believe adding extra bacon costs more money. "<< std::endl;;
	std::cout <<"You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << RESET << std::endl;
}
void Harl::_warning( void )
{
	std::cout << std::endl << std::setw(30) << UNDERLINE << MAGENTA << "[  WARNING  ]" << RESET <<std::endl;
	std::cout << BOLD << YELLOW << "I think I deserve to have some extra bacon for free. ."<< std::endl;;
	std::cout <<"I’ve been coming for years whereas you started working here since last month" << RESET << std::endl;
}
void Harl::_error( void )
{
	std::cout << std::endl << std::setw(30) << UNDERLINE << MAGENTA << "[  ERROR  ]" << RESET <<std::endl;
	std::cout << BOLD << RED << "This is unacceptable ! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level){
   
   int index = -1;

   std::string levelNb[] = {"DEBUG","INFO", "WARNING", "ERROR"};
	
	void (Harl::*functionptr[])() = { &Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for(int i = 0; i < 4 ; i++)
	{
		if (levelNb[i] == level)
			index = i;
	}
   switch (index){
	
	case  0 :
		for(int i = 0; i < 4 ; i++)
			(this->*functionptr[i])();
	break ;

	case 1 :
		for(int i = 1; i < 4 ; i++)
			(this->*functionptr[i])();
	break ;
	case 2 :
	for(int i = 2; i < 4 ; i++)
		(this->*functionptr[i])();
	break ;
	case 3 :
	   (this->*functionptr[3])();
		break ;
	default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
   	}

}

