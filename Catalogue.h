#include <stdio.h>
/*************************************************************************
                           Ensemble  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Ensemble> (fichier Ensemble.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

#include "Liste.h"
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
//
//
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC


public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    void AfficherCatalogue() const;
    bool TrouverTrajet(char* ville1, char* ville2);
    void AjouterTrajet(Maillon * nouveau);
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
   Catalogue & operator = ( const Catalogue & unCatalogue );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur

   Catalogue (Liste* liste);

    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Catalogue ( ); 
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées


//----------------------------------------------------- Attributs protégés
Liste list;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet