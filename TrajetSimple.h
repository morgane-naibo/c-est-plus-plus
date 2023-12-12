/*************************************************************************
                           TrajetSimple -  Cette classe permet d'instancier 
			   des trajets se faisant en une seule étape.
                             -------------------
    début                : $22/11/23$
    copyright            : par $Eleonore/Martin/Morgane/Marc$
    e-mail               : $eleonore.dugast@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ---
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
    virtual void Afficher() const;
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun



//-------------------------------------------- Constructeurs - destructeur

  TrajetSimple (char* , char*, char*);
    // Mode d'emploi :
    // Le premier parametre est la ville1, le deuxieme parametre est la ville d'arrivée
    // Le dernier est le moyen de transport
    // Contrat :
    // Aucun

    virtual ~TrajetSimple( ); 
    // Mode d'emploi :
    // Aucun
    // Contrat :
    // Aucun

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
char* moyTransport;
};

//-----------------Autres définitions dépendantes de <TrajetSimple>

#endif // Trajet
