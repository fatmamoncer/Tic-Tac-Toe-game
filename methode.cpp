#include "squelette.h"
#include <iostream>
#include <windows.h>
using namespace std;

void joueur ::set_tourjoueur(int a)
{
	tourjoueur = a;
}
int joueur::get_tourjoueur()
{
	return tourjoueur;
}
jeu::jeu()
{
	j.set_tourjoueur(1);
	cout << endl;
	colorer("************* Bienvenu Au Jeu De Morpion *****************", 14);
	cout << endl
		 << endl;
	cout << "donner le nom de premier joueur : ";
	cin >> nom1;
	cout << "donner le nom de deuxieme joueur : ";
	cin >> nom2;
}
void colorer(string c, int a)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
	cout << c;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
}

void colorer(char c)
{
	if (c == 'x')
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 04);
		cout << c;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
	}
	else if (c == 'o')
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 02);
		cout << c;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 07);
		cout << c;
	}
}

void jeu ::debut()
{
	system("cls");
	cout << endl;
	colorer("************************* JEU DE MORPION *************************", 14);
	cout << endl
		 << endl;
	cout << "                        " << nom1 << " (";
	colorer('o');
	cout << ") - " << nom2 << " (";
	colorer('x');
	cout << ")" << endl;
	cout << endl
		 << "                               |   | " << endl;
	cout << "                              ";
	colorer(grille[1]);
	cout << "| ";
	colorer(grille[2]);
	cout << " |";
	colorer(grille[3]);
	cout << endl
		 << "                            ___|___|___" << endl;
	cout << "                               |   | " << endl;
	cout << "                              ";
	colorer(grille[4]);
	cout << "| ";
	colorer(grille[5]);
	cout << " |";
	colorer(grille[6]);
	cout << endl
		 << "                            ___|___|___" << endl;
	cout << "                               |   | " << endl;
	cout << "                              ";
	colorer(grille[7]);
	cout << "| ";
	colorer(grille[8]);
	cout << " |";
	colorer(grille[9]);
	cout << endl
		 << "                               |   | " << endl
		 << endl;
}

void jeu ::choixjoueur()
{
	int choix;
debuter:
	if (j.get_tourjoueur() == 1)
		cout << nom1;
	else
		cout << nom2;
	cout << " : donner votre choix de case --> ";
	cin >> choix;
	if (j.get_tourjoueur() == 1)
	{

		char sym = 'o';
		if ((choix == 1) && (grille[1] == '1'))
		{
			grille[1] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 2) && (grille[2] == '2'))
		{
			grille[2] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 3) && (grille[3] == '3'))
		{
			grille[3] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 4) && (grille[4] == '4'))
		{
			grille[4] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 5) && (grille[5] == '5'))
		{
			grille[5] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 6) && (grille[6] == '6'))
		{
			grille[6] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 7) && (grille[7] == '7'))
		{
			grille[7] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 8) && (grille[8] == '8'))
		{
			grille[8] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else if ((choix == 9) && (grille[9] == '9'))
		{
			grille[9] = sym;
			j.set_tourjoueur(2);
			sym = 'x';
		}

		else
		{
			cout << "erreur : case invalide" << endl;
			goto debuter;
		}
	}
	else if ((j.get_tourjoueur()) == 2)
	{
		char sym = 'x';
		if ((choix == 1) && (grille[1] == '1'))
		{
			grille[1] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 2) && (grille[2] == '2'))
		{
			grille[2] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 3) && (grille[3] == '3'))
		{
			grille[3] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 4) && (grille[4] == '4'))
		{
			grille[4] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 5) && (grille[5] == '5'))
		{
			grille[5] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 6) && (grille[6] == '6'))
		{
			grille[6] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 7) && (grille[7] == '7'))
		{
			grille[7] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 8) && (grille[8] == '8'))
		{
			grille[8] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else if ((choix == 9) && (grille[9] == '9'))
		{
			grille[9] = sym;
			j.set_tourjoueur(1);
			sym = 'o';
		}
		else
		{
			cout << "erreur: case invalide" << endl;
			goto debuter;
		}
	}
}

void jeu ::analyser()
{
	if ((grille[1] == grille[2]) && (grille[2] == grille[3]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[1] == grille[4]) && (grille[4] == grille[7]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[3] == grille[6]) && (grille[6] == grille[9]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[7] == grille[8]) && (grille[8] == grille[9]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[7] == grille[5]) && (grille[5] == grille[3]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[1] == grille[5]) && (grille[5] == grille[9]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[4] == grille[5]) && (grille[5] == grille[6]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else if ((grille[2] == grille[5]) && (grille[5] == grille[8]))
	{
		debut();
		colorer("LE GAGNANT EST =====> ", 12);
		if (j.get_tourjoueur() == 2)
			cout << nom1;
		else
			cout << nom2;
		colorer(" <=====", 12);
		exit(0);
	}
	else
	{
		debut();
		colorer("Jeu Fini ! Pas De Gagnant", 12);
	}
}
