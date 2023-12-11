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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
    virtual void AfficherListe() const;
    
    virtual void Insertion (Maillon* nouveau) ;

    Maillon* GetHead() const;


//-------------------------------------------- Constructeurs - destructeur

    Liste (Maillon* first=nullptr);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Liste ( );
    // Mode d'emploi :
    //
    // Contrat :
    //
    



//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées


//----------------------------------------------------- Attributs protégés
Maillon* head;

};

//-------------------------------- Autres définitions dépendantes de <Trajet>

#endif // LISTE_H

