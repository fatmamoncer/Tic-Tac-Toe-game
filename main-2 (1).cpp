#include "methode.cpp"
#include <iostream>
using namespace std;

int main()
{
	jeu jeu1;
	int i = 1;

	do
	{
		jeu1.analyser();
		jeu1.debut();
		jeu1.choixjoueur();

		i++;
	} while (i <= 9);
	jeu1.analyser();
	return 0;
}
