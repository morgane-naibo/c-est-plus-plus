#include <stdio.h>
/*************************************************************************
                           Catalogue - 
			   Cette classe permet de stocker tous les trajets au travers 
			   d'une instance de la classe Liste. Elle n'a pas énormément
			   d'intérêt pour notre projet mais permettrait de rentrer plus 
			   d'informations que la liste de trajets si nous souhaitons 
			   améliorer notre projet.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eleonore/Martin/Morgane/Marc$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

#include "Liste.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    void AfficherCatalogue() const;

    bool TrouverTrajet(char* ville1, char* ville2);
    // Mode d'emploi :
    // Entrée : deux chaines de caractères représentant les villes de départ 
    // (ville 1) et d'arrivée (ville 2)
    // Contrat :
    // Aucun

    void AjouterTrajet(Maillon * nouveau);
    // Mode d'emploi :
    // Entrée : le maillon à ajouter au catalogue
    // Contrat :
    // Aucun

    bool ChercherTrajet(char* ville1, char* ville2,int indexvisites[100]);
    // Mode d'emploi :
    // Entrée : ville 1 = départ ; ville 2 = arrivée
    // Contrat :
    // Entrée : l'index est de base fixé à 0, on peut le mettre entre 0 et 100 (sinon pas de recherche)




//-------------------------------------------- Constructeurs - destructeur

   Catalogue (Liste* liste);

    // Mode d'emploi :
    // Entrée : il faut entrer un pointeur de liste.
    // Contrat :
    // Aucun

    virtual ~Catalogue ( ); 
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

protected:
//----------------------------------------------------- Méthodes protégées


//----------------------------------------------------- Attributs protégés
Liste * list; // Pointeur vers la liste contenant les trajets.

};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet
