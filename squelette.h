#include <string>
using namespace std;

class joueur
{
	int tourjoueur;

public:
	int get_tourjoueur();
	void set_tourjoueur(int);
};

class jeu
{
	joueur j;
	static char grille[];
	string nom1, nom2;

public:
	jeu();
	void debut();
	void choixjoueur();
	void analyser();
};
void colorer(char);		   // pour colorer 'x'/'o'
void colorer(string, int); // pour colorer n'importe quelle string
char jeu ::grille[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
