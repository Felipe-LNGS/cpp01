#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name ){
	
    Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
         std::stringstream fullName;
        fullName << name  << i+1;
        new (&horde[i]) Zombie(fullName.str());
    }
return (horde);
}