#include <iostream>
using namespace std;

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;
    
    // Attribut statique pour compter les objets
    static int nbBoites;

public:
    // Constructeur
    Boite(double l, double L, double h) : longueur(l), largeur(L), hauteur(h) {
        nbBoites++;  // Incrémenter le compteur à chaque création
    }

    // Destructeur
    ~Boite() {
        nbBoites--;  // Décrémenter le compteur à chaque destruction
    }

    // Méthode statique pour accéder au nombre d'objets
    static int getNombreBoites() {
        return nbBoites;
    }

    // Méthode pour afficher les dimensions
    void afficher() const {
        cout << "Boite(" << longueur << " x " << largeur << " x " << hauteur << ")" << endl;
    }
};

// Initialisation du compteur statique
int Boite::nbBoites = 0;

int main() {
    cout << "Nombre de boites avant creation: " << Boite::getNombreBoites() << endl;

    Boite b1(2, 3, 4);
    Boite b2(5, 6, 7);
    
    cout << "Nombre de boites apres creation: " << Boite::getNombreBoites() << endl;

    {
        Boite b3(1, 1, 1);
        cout << "Nombre de boites apres creation de b3: " << Boite::getNombreBoites() << endl;
    } // b3 est détruit ici

    cout << "Nombre de boites apres destruction de b3: " << Boite::getNombreBoites() << endl;

    return 0;
}
