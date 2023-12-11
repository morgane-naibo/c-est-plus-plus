/*************************************************************************
                           TrajetSimple -  Cette classe permet d'instancier 
			   des trajets se faisant en une seule étape.
                             -------------------
    début                : $22/11/23$
    copyright            : par $Eleonore/Martin/Morgane/Marc$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier Ensemble.h) ----------------
#if ! defined ( TRAJETSIMPLE_H )
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
//
//
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
//----------------------------------------------------------------- PUBLIC


public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    virtual void Afficher() const;
    // Mode d'emploi :
    //
    // Contrat :
    //



//-------------------------------------------- Constructeurs - destructeur

  TrajetSimple (char* , char*, char*);

    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetSimple( ); 
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
char* moyTransport;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet
