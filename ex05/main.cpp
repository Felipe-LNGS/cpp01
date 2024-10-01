#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << std::setw(30) << UNDERLINE << MAGENTA << "INFO" << RESET <<std::endl;
    harl.complain("info");
    std::cout << std::endl << std::setw(30) << UNDERLINE << MAGENTA << "ERROR" << RESET <<std::endl;
    harl.complain("error");
    std::cout<< std::endl << std::setw(30)<< UNDERLINE << MAGENTA << "DEBUG" << RESET <<std::endl;
    harl.complain("debug");
    std::cout << std::endl << std::setw(30) << UNDERLINE << MAGENTA << "WARNING" << RESET <<std::endl;
    harl.complain("warning");
    return 0;
}
