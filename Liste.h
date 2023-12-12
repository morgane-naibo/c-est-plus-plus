/*************************************************************************
                           Trajet  -  Cette classe est une classe 
                           abstraite et mère de TrajetSimple et 
                           TrajetComposea qui représente un trajet entre 
                           deux villes.
                             -------------------
    début                : $29/11/23$
    copyright            : Par $Eleonore/Martin/Morgane/Marc$
*************************************************************************/

//---------- Interface de la classe <Liste> (fichier Ensemble.h) ----------------
#if ! defined ( LISTE_H )
#define LISTE_H

//--------------------------------------------------- Interfaces utilisées

#include "Maillon.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

class Liste 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    virtual void AfficherListe() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun
    
    virtual void Insertion (Maillon* nouveau) ;
    // Mode d'emploi : 
    // Le maillon à insérer à la fin de la liste
    // Contrat :
    // Aucun 

    Maillon* GetHead() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun


//-------------------------------------------- Constructeurs - destructeur

    Liste (Maillon* first=nullptr);
    // Mode d'emploi :
    // first est un pointeur vers le premier Maillon de la liste.
    // Contrat : 
    // Si aucun pointeur n'est donné sa valeur par défaut est nullptr

    virtual ~Liste ( );
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun
    



//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Maillon* head;

};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // LISTE_H

