#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <cctype>
#include <iostream>
#include <string>
#include <sstream>


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

class Weapon{

	private :
		std::string _typeWeapon;

	public :
		Weapon(const std::string &typeWeapon);
		~Weapon();
		void setType(const std::string &typeWeapon);
		const std::string &getType()const;
};

#endif