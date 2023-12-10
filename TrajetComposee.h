/*************************************************************************
                           Ensemble  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Ensemble> (fichier Ensemble.h) ----------------
#if ! defined ( TRAJETCOMPOSEE_H )
#define TRAJETCOMPOSEE_H

//--------------------------------------------------- Interfaces utilisées
#include "Trajet.h"
#include "Liste.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
//
//
//------------------------------------------------------------------------

class TrajetComposee : public Trajet
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

 

    Liste *  getListInt();



//-------------------------------------------- Constructeurs - destructeur

  TrajetComposee (char* , char*, Liste *);

    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~TrajetComposee( ); 
    // Mode d'emploi :
    //
    // Contrat :
    //
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
Liste* trajetsInt;
};

//-------------------------------- Autres définitions dépendantes de <Ensemble>

#endif // Trajet