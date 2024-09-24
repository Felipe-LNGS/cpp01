#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";
const std::string BOLD = "\033[1m";
const std::string UNDERLINE = "\033[4m";

class Harl{

	private :
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
	public :
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif