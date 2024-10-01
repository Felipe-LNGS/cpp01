#include "Replace.hpp"

int main (int ac , char **av)
{
    if (ac != 4 )
    {
        std::cerr << "Syntax error, you must run the program like this: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    else
        newFile(av[1], av[2], av[3]);
    return 0;
}
