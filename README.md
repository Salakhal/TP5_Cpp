# TP 5 : Attributs et Méthodes Statiques en C++

## Exercice 1 : Compteur d’objets

**Objectif :**  
Compter le nombre d’objets créés à partir d’une classe `Boite`.

**Description :**  
- La classe `Boite` possède `longueur`, `largeur`, `hauteur`.  
- Attribut statique `nbBoites` pour compter toutes les instances.  
- Le compteur s’incrémente dans le constructeur et se décrémente dans le destructeur.  
- Méthode statique `getNombreBoites()` pour accéder au compteur.

**Exemple de sortie :**  

```
Nombre de boites avant creation: 0
Nombre de boites apres creation: 2
Nombre de boites apres creation de b3: 3
Nombre de boites apres destruction de b3: 2

```



## Exercice 2 : Taux de TVA partagé

**Objectif :**  
Appliquer un taux de TVA commun à tous les objets d’une classe `Produit`.

**Description :**  
- La classe `Produit` possède `nom` et `prixHT`.  
- Attribut statique `tauxTVA` initialisé à 20%.  
- Méthode `getPrixTTC()` calcule le prix toutes taxes comprises.  
- Méthode statique `modifierTVA(float)` modifie le taux pour tous les produits.

**Exemple de sortie :**

```
Prix TTC avant modification de la TVA:
Stylo : Prix TTC = 2.4 euros
Cahier : Prix TTC = 6 euros
Sac : Prix TTC = 36 euros

Prix TTC apres modification de la TVA:
Stylo : Prix TTC = 2.2 euros
Cahier : Prix TTC = 5.5 euros
Sac : Prix TTC = 33 euros

```

## Exercice 3 : Gestion des sessions utilisateurs

**Objectif :**  
Gérer le nombre d’utilisateurs connectés dans un système grâce à un attribut statique.

**Description :**  
- La classe `Utilisateur` possède `nom` et `role`.  
- Attribut statique privé `nbUtilisateursConnectes` qui suit les connexions en cours.  
- Le constructeur incrémente le compteur et le destructeur le décrémente.  
- Méthode statique `getNbUtilisateursConnectes()` pour obtenir le nombre d’utilisateurs connectés.

**Exemple de sortie :**  

```
Nombre d'utilisateurs connectés : 0
Alice (admin) s'est connecté.
Nombre d'utilisateurs connectés : 1
Bob (visiteur) s'est connecté.
Nombre d'utilisateurs connectés : 2
Charlie (visiteur) s'est connecté.
Nombre d'utilisateurs connectés : 3
Charlie (visiteur) s'est déconnecté.
Nombre d'utilisateurs connectés : 2

```




