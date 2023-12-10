/*************************************************************************
                           Trajet  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Liste> (fichier Ensemble.h) ----------------
#if ! defined ( LISTE_H )
#define LISTE_H

//--------------------------------------------------- Interfaces utilisées

#include "Maillon.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Ensemble>
//
//
//------------------------------------------------------------------------

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

