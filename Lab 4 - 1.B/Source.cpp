#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Client_s
{
	int NumeroCompte;
	string NomComplet;
	string MotPasse;
};
vector <Client_s>Clients; // conserve les clients

int CompteDebut = 23000;

void CreationClient();
void AffichageClients();

void main(void)
{

	int OptionMenu;
	do {
		cout << "1. Ajouter 1 client:"
			"\n2. Afficher les clients"
			"\n3. Quitter le menu";

		cin >> OptionMenu;

		switch (OptionMenu)
		{
		case 1: CreationClient();
			break;
		case 2: AffichageClients();
			break;
		case 3:
			_getch();
		}
	} while (OptionMenu != 3);

}

void CreationClient()
{
	Client_s Customer;

	system("cls");
	cout << "Entrez le nom complet";
	cin >> Customer.NomComplet;
	cout << "\nEntrez un mot de passe";
	cin >> Customer.MotPasse;
	Customer.NumeroCompte = CompteDebut;
	CompteDebut++;
	Clients.push_back(Customer);


}
void AffichageClients()
{
	system("cls");
	cout << "*** CLIENTS ***\n";
	for (int i = 0; i < Clients.size(); i++) // changer limite
	{
		cout << "Compte: " << Clients[i].NumeroCompte;
		cout << "\nNom client: " << Clients[i].NomComplet;
		cout << "\nMot de passe: " << Clients[i].MotPasse;
		cout << "\n\n";
	}
}
