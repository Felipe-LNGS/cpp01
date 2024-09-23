#include "Zombie.hpp"

int main()
{
	int N = 12;
	Zombie* horde = zombieHorde(N, "Jackie_");
	for(int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}

//Quand on fait "MY_CLASS class" declare simplement comme ca. Cela le cree dans la stack et donc le destructeur est appele directement au moment du return. 

//Quand on fait "MY_CLASS *class = new MY_CLASS()" "new" equivaut a faire un malloc sur class.
// Cela le cree dans la heap et donc le destrtucteur  est appele directement au moment ou ont fait appele a "delete". 