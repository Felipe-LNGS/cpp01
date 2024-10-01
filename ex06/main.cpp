#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
	{   
		std::cout <<RED << "If you want to talk to Harl, you need to make this ./HarlFilter <LEVEL>" << std::endl << "LEVEL : DEBUG, INFO, WARNING, ERROR or ask him whatever you want."<< RESET << std::endl;
		return 1;
	}   
	 harl.complain(av[1]);
	return 0;
}
