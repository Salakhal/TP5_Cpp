#include <iostream>
#include <string>
using namespace std;

class Utilisateur {
private:
    string nom;
    string role;
    static int nbUtilisateursConnectes; // compteur statique privé

public:
    // Constructeur : incrémente le compteur à chaque connexion
    Utilisateur(string n, string r) : nom(n), role(r) {
        nbUtilisateursConnectes++;
        cout << nom << " (" << role << ") s'est connecté." << endl;
        afficherNbConnectes();
    }

    // Destructeur : décrémente le compteur à chaque déconnexion
    ~Utilisateur() {
        nbUtilisateursConnectes--;
        cout << nom << " (" << role << ") s'est déconnecté." << endl;
        afficherNbConnectes();
    }

    // Méthode statique pour accéder au nombre d'utilisateurs connectés
    static int getNbUtilisateursConnectes() {
        return nbUtilisateursConnectes;
    }

    // Méthode pour afficher le nombre d'utilisateurs connectés
    static void afficherNbConnectes() {
        cout << "Nombre d'utilisateurs connectés : " 
             << nbUtilisateursConnectes << endl;
    }
};

// Initialisation du compteur statique
int Utilisateur::nbUtilisateursConnectes = 0;

int main() {
    cout << "Au démarrage : ";
    Utilisateur::afficherNbConnectes();

    Utilisateur u1("Alice", "admin");
    Utilisateur u2("Bob", "visiteur");

    {
        Utilisateur u3("Charlie", "visiteur");
    } // u3 se déconnecte automatiquement ici

    return 0;
}
