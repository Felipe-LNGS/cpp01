#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";

    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "adress orignal string : " << &brain << std::endl;
    std::cout << "adress stringPTR      : " << stringPTR << std::endl;
    std::cout << "adress stringREF      : " << &stringREF  << std::endl<< std::endl;

    std::cout << "value orignal string : " <<brain << std::endl;
    std::cout << "value stringPTR      : " << *stringPTR << std::endl;
    std::cout << "value stringREF      : " << stringREF << std::endl;
}

// Références
// Syntaxe :

// Déclaration : int& ref = variable;
// Accès direct : ref
// En résumé

// Pointeurs : Flexibles, peuvent pointer vers n'importe quel objet, mais nécessitent une gestion prudente de la mémoire.
// Références : Alias simples et sécurisés pour une variable, évitant les complications des pointeurs.
