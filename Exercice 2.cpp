#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    float prixHT;
    
    // Attribut statique pour le taux de TVA
    static float tauxTVA;

public:
    // Constructeur
    Produit(string n, float prix) : nom(n), prixHT(prix) {}

    // Méthode pour calculer le prix TTC
    float getPrixTTC() const {
        return prixHT * (1 + tauxTVA/100);
    }

    // Méthode pour afficher le produit et son prix TTC
    void afficher() const {
        cout << nom << " : Prix TTC = " << getPrixTTC() << " euros" << endl;
    }

    // Méthode statique pour modifier le taux de TVA
    static void modifierTVA(float nouveauTaux) {
        tauxTVA = nouveauTaux;
    }
};

// Initialisation du taux de TVA à 20%
float Produit::tauxTVA = 20.0;

int main() {
    // Création de produits
    Produit p1("Stylo", 2.0);
    Produit p2("Cahier", 5.0);
    Produit p3("Sac", 30.0);

    cout << "Prix TTC avant modification de la TVA:" << endl;
    p1.afficher();
    p2.afficher();
    p3.afficher();

    // Modifier le taux de TVA
    Produit::modifierTVA(10.0);

    cout << "\nPrix TTC apres modification de la TVA:" << endl;
    p1.afficher();
    p2.afficher();
    p3.afficher();

    return 0;
}
