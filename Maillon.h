/*************************************************************************
                           Ensemble  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Ensemble> (fichier Ensemble.h) ----------------
#if ! defined ( MAILLON_H )
#define MAILLON_H
#include "Trajet.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
//
//
//------------------------------------------------------------------------

class Maillon
{
//----------------------------------------------------------------- PUBLIC


public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
   
    void AfficherMaillon() const;
    void ChangerPointeur(Maillon* pointeur);
    Maillon* GetMaillon();
    
    // Mode d'emploi :
    //
    // Contrat :
    //



//-------------------------------------------- Constructeurs - destructeur
    Maillon(Trajet* t1, Maillon* ptr);
    
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Maillon( ); 
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Maillon * pointeurSuivant;
Trajet * T;

};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet
